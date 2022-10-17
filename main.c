/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:50:01 by dhendzel          #+#    #+#             */
/*   Updated: 2022/10/17 18:04:45 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

int main()
{
    
	// char comp[] = "Hellopi";
	// char comp2[] = "Hell";
    // char dst[] = "This is destination";
    // char src[] = "socurce ficcle";
    // char src2[] = "Abrakadabra";
    // char buffer[64] = "this is ";
    // char src3[] = "a very long string";
	// char	haystack[] = "there is a lot of wow j";
	// char	needle[] = "wow";
	// char	*test;

    // printf("%zu \n",ft_strlen(str));
    // printf("%s \n",str);
    // printf("%s \n",ft_memset(str,'g',4));
    // ft_bzero(str,1);
    // printf("%s \n",str);
    // printf("dst before memcpy %s \n",dst);
    // printf("source: %s \n",src);
    // printf("%s \n",ft_memcpy(dst,src,5));
    // printf("dst after memcpy %s \n",dst);
    // printf("source : %s \n",src2);
    // printf("%s \n",ft_memmove(dst,src2,5));
	// printf("dst after memmove: %s \n",dst);
    // printf("source : %s \n",src2);
	// printf("dst before strlcpy %s \n",dst);
    // printf("source: %s \n",src);
    // ft_strlcpy(dst,src,5);
	// printf("dst after strlcpy %s \n",dst);
    // ft_strlcat(buffer,src3,64);
    // printf("%s \n",buffer);
    
    // c='Z';
    // printf("%c \n",ft_tolower(c));
    // printf("%c \n",ft_toupper(c));
    
    // printf("%s \n",ft_strchr(src,'c'));
    // printf("%s \n",ft_strrchr(src,'c'));
	// printf("%s \n%s \n", comp2, comp);
	// printf("my strncmp: %d \n",ft_strncmp(comp2,comp,7));
	// printf("original strncmp: %d \n",strncmp(comp2,comp,7));
	// printf("my memchr: %s \n",ft_memchr(src2,'b',5));
	// printf("original memchr: %s \n",memchr(src2,'b',5));
    // printf("my memcmp: %d \n",ft_memcmp(comp2,comp,7));
	// printf("original memcmp: %d \n",memcmp(comp2,comp,7));

	// printf("my strnstr: %s \n",ft_strnstr(haystack,needle,25));
	// printf("original strnstr: %s \n",strnstr(haystack,needle,25));
	// printf("my atoi: %d \n",ft_atoi("+1233hj4546546df45"));
	// // printf("Original atoi: %d \n",atoi("+1233jh4546546df45"));
	
	// test = ft_calloc(3,1);
	// if(!test)
	// 	printf("error!");
	// else
	// 	printf("memory allocated! \n");
	// printf("%c",test[0]);

    // c=120;
    // if (ft_isalpha(c))
    //     printf("is alpha!");
    // if (ft_isdigit(c))
    //     printf("is digit!");
    // if (ft_isalnum(c))
    //     printf("is alnum!");
    // if (ft_isascii(c))
    //     printf("is ascii!");
    // if (ft_isprint(c))
    //     printf("is printable!");
	// char	c;
    // char str[] = "Hello|see|you|there|maybe";
	// char **test;
	// int i;
	// i=0;
	// c = '|';
	// test = ft_split(str,c);	
	// while (i<5)
	// {
	// 	printf("%s ",test[i]);
	// 	i++;
	// }
	// int n;
	
	// n = 0;
	// printf("%s \n",ft_itoa(n));
	// char str[] = "Hello";
	// int n = -654648;	
	// ft_putnbr_fd(n,1);	
	// char	c1;
	// char	c2;
	// int		num;
	// int		num_neg;
	// char	*str;
	// int		hex;
	// int		*ptr;

	// c1='i';
	// c2='g';
	// num = 125;
	// num_neg = -99;
	// str = "Hello, motherfucker";
	// hex = 0xab0;
	// ptr = &num;
	// ft_printf("Som%xth%cn%c %d %s\n",hex,c1,c2,num,str);
    // printf("unsigned positive:%u \n",num);
	// printf("decimal positive:%d \n",num);
	// ft_printf("My unsigned positive:%u \n",num);
	// ft_printf("My decimal positive:%d \n",num);
	// printf("unsigned negative:%u \n",num_neg);
	// printf("decimal negative:%d \n",num_neg);
	// ft_printf("My unsigned negative:%u \n",num_neg);
	// ft_printf("My decimal negative:%d \n",num_neg);
	// printf("%p \n",ptr);
	// ft_printf("%p \n",ptr);

	ft_printf("%c \n", '0');
	ft_printf(" %c \n", '0');
	ft_printf(" %c \n", '0' - 256);
	ft_printf("%c \n", '0' + 256);
	ft_printf(" %c %c %c \n", '0', 0, '1');
	ft_printf(" %c %c %c \n", ' ', ' ', ' ');
	ft_printf(" %c %c %c \n", '1', '2', '3');
	ft_printf(" %c %c %c \n", '2', '1', 0);
	ft_printf(" %c %c %c \n", 0, '1', '2');
	printf("%c \n", '0');
	printf(" %c \n", '0');
	printf(" %c \n", '0' - 256);
	printf("%c \n", '0' + 256);
	printf(" %c %c %c \n", '0', 0, '1');
	printf(" %c %c %c \n", ' ', ' ', ' ');
	printf(" %c %c %c \n", '1', '2', '3');
	printf(" %c %c %c \n", '2', '1', 0);
	printf(" %c %c %c \n", 0, '1', '2');
	
	return(0);
} 
