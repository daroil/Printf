# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 17:53:59 by dhendzel          #+#    #+#              #
#    Updated: 2022/10/17 18:13:44 by dhendzel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
SRCS =  main.c ft_putchar.c ft_putstr.c \
		ft_putnbr.c ft_printf.c

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

reclean: fclean
	rm -f result

rere: reclean result