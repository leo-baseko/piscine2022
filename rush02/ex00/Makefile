# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guroubau <guroubau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 15:39:46 by guroubau          #+#    #+#              #
#    Updated: 2022/09/25 18:51:58 by guroubau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

FCT		=	main ft_read_fd ft_tab ft_algo ft_check_number ft_ato_uint \
			ft_aff_tab ft_read_file ft_strnjoin_free ft_line \
			ft_puterror ft_strlen ft_putstr ft_free ft_isdigit \
			ft_strndup ft_isspace ft_isprintable ft_key_value ft_str_is_equal \
			

SRCS	=	$(addsuffix .c, $(FCT))
OBJS	=	$(addsuffix .o, $(FCT))

DIR_INC	=	./
INCLUDE	=	ft_rush02.h

CC		=	cc
FLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)

.c.o	:	$(SRCS)
			$(CC) $(FLAGS) -I $(DIR_INC) -c $< -o $@

$(NAME)	:	$(OBJS) $(INCLUDE)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean	:
			rm -f $(OBJS)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all
