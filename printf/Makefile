# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cafang <cafang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/03 15:34:37 by cafang            #+#    #+#              #
#    Updated: 2025/07/03 15:53:07 by cafang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
SRCS = ft_printf.c ft_putchar.c ft_putstr.c \
		ft_putnbr.c ft_putnbr_unsigned.c \
		ft_puthex_lower.c ft_puthex_upper.c \
		ft_puthex_pointer.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re