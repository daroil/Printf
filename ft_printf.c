/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:02:32 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/18 18:46:08 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count_unsigned_num(unsigned int n)
{
	size_t	count;

	if (n > 0)
		count = 0;
	else
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_put_unsigned_nbr(unsigned int n)
{	
	unsigned int	num;

	num = n;
	if (num >= 10)
		ft_put_unsigned_nbr(num / 10);
	ft_putchar(num % 10 + '0');
	return (ft_count_unsigned_num(num));
}

int ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		num;
	char	*str1;
	char	s[8];
	char	s2[16];
	unsigned int		u;
	int		i;
	int		j;
	unsigned long	ptr;
	int		val;
	int		add;
	int		iter;
	
	val = 0;
	add = 0;
	iter = 0;
	va_start(argptr, str);
	while(*str)
	{
		if (*str == '%' && *(str+1) == 'c')
		{
			ft_putchar(va_arg(argptr, int));
			str++;
			add++;
		}
		else if (*str == '%' && (*(str + 1) == 'd' || *(str + 1) == 'i'))
		{
			num = va_arg(argptr, int);
			add += ft_putnbr(num);
			str++;
		}
		else if (*str == '%' && *(str + 1) == 'u')
		{
			num = va_arg(argptr, unsigned long);
			add += ft_put_unsigned_nbr(num);
			str++;
		}
		else if (*str == '%' && *(str + 1) == 's')
		{
			str1 = va_arg(argptr, char*);
			add += ft_putstr(str1);
			str++;
		}
		else if (*str == '%' && *(str+1) == '%')
		{
			ft_putchar('%');
			add++;
			str++;
		}
		else if (*str == '%' && (*(str+1) == 'x' || *(str+1) == 'X'))
		{
			u = va_arg(argptr, unsigned int);
			i = 7;
			if (*(str + 1) == 'x')
				j = 87;
			if (*(str + 1) == 'X')
				j = 55;
			if (u == 0)
				add += ft_putchar('0');
			while (u)
			{
				if ((u % 16) >= 10)
					s[i] = (u % 16) + j;
				else
					s[i] = (u % 16) + '0';
				u /= 16;
				i--;
			}
			while(++i < 8)
				add += ft_putchar(s[i]);
			str++;
		}
		else if (*str == '%' && *(str+1) == 'p')
		{
			ptr = va_arg(argptr, unsigned long);
			i = 15;
			add += ft_putstr("0x");
			if (ptr == 0)
				add += ft_putchar('0');
			while (ptr)
			{
				if ((ptr % 16) >= 10)
					s2[i] = (ptr % 16) + 87;
				else
					s2[i] = (ptr % 16) + '0';
				ptr /= 16;
				i--;
			}
			while(++i < 16)
				add += ft_putchar(s2[i]);
			str++;
		}
		else
		{
			ft_putchar(*str);
			val++;
		}
		str++;
	}
	va_end(argptr);
	return (val + add);
}
