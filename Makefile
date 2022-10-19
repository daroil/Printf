# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 17:53:59 by dhendzel          #+#    #+#              #
#    Updated: 2022/10/19 16:47:31 by dhendzel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
SRCS =  ft_putchar.c ft_putstr.c \
		ft_putnbr.c ft_printf.c ft_print_hexa.c\
		ft_print_pointer.c ft_put_unsigned_nbr.c

NAME = libftprintf.a 
OBJ	= $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

result:
	$(CC) $(CFLAGS) -o result $(SRCS)
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
