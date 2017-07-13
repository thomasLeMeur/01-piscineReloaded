# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-meur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 18:11:41 by tle-meur          #+#    #+#              #
#    Updated: 2017/01/21 17:45:48 by tle-meur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

FLAGS	=	-Wall -Wextra -Werror

SRCS	=	main.c

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			@gcc $(FLAGS) -o $(NAME) main.c

clean	:
			rm -f 

fclean	:	clean
			rm -f $(NAME)

re		:	fclean $(NAME)

.PHONY:		all clean fclean re
