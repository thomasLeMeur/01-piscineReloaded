# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 18:11:41 by tle-meur          #+#    #+#              #
#    Updated: 2017/01/21 17:25:14 by tle-meur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FLAGS	=	-Wall -Wextra -Werror

SRCS	=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
			srcs/ft_swap.c

OBJS	=	$(SRCS:.c=.o)

INCS	=	includes/

all		:	$(NAME)

%.o		:	%.c
			@gcc $(FLAGS) -o $@ -c $< -I $(INCS)

$(NAME)	:	$(OBJS)
			@gcc $(FLAGS) -c $(SRCS) -I $(INCS)
			@ar rc $(NAME) $(OBJS)
			@ranlib $(NAME)

clean	:
			@rm -f $(OBJS)

fclean	:	clean

re		:	fclean $(NAME)

.PHONY:		all clean fclean re
