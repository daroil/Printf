/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:02:32 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/17 18:14:25 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned_nbr(unsigned int n)
{	
	unsigned long	num;

	num = n;
	if (num >= 10)
		ft_put_unsigned_nbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		num;
	char	*str1;
	char	s[8];
	char	s2[16];
	int		u;
	int		i;
	int		j;
	unsigned long	ptr;
	
	va_start(argptr, str);
	while(*str)
	{
		if (*str == '%' && *(str + 1) == 'c')
		{
			// c = va_arg(argptr, int);
			ft_putchar(va_arg(argptr, int));
			str++;
		}
		else if (*str == '%' && (*(str + 1) == 'd' || *(str + 1) == 'i'))
		{
			num = va_arg(argptr, int);
			ft_putnbr(num);
			str++;
		}
		else if (*str == '%' && *(str + 1) == 'u')
		{
			num = va_arg(argptr, unsigned long);
			ft_put_unsigned_nbr(num);
			str++;
		}
		else if (*str == '%' && *(str + 1) == 's')
		{
			str1 = va_arg(argptr, char*);
			ft_putstr(str1);
			str++;
		}
		else if (*str == '%' && *(str + 1) == '%')
		{
			ft_putchar('%');
			str++;
		}
		else if (*str == '%' && (*(str + 1) == 'x' || *(str + 1) == 'X'))
		{
			u = va_arg(argptr, int);
			i = 7;
			if (*(str + 1) == 'x')
				j = 87;
			if (*(str + 1) == 'X')
				j = 55;
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
				ft_putchar(s[i]);
			str++;
		}
		else if (*str == '%' && *(str + 1) == 'p')
		{
			ptr = va_arg(argptr, unsigned long);
			i = 15;
			while (ptr)
			{
				if ((ptr % 16) >= 10)
					s2[i] = (ptr % 16) + 87;
				else
					s2[i] = (ptr % 16) + '0';
				ptr /= 16;
				i--;
			}
			ft_putstr("0x");
			while(++i < 16)
				ft_putchar(s2[i]);
			str++;
		}
		else
			ft_putchar(*str);
		str++;
	}
	va_end(argptr);
	return (0);
}
