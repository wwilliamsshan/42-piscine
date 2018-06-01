# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wshan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 16:52:53 by wshan             #+#    #+#              #
#    Updated: 2018/05/31 19:24:34 by wshan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c *.c
	gcc -o $(NAME) ft_cat.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
