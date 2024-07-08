# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 19:21:03 by aoswald           #+#    #+#              #
#    Updated: 2024/07/01 18:02:46 by aoswald          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) created"

clean:
	rm -f $(OBJS)
	@echo "OBJ deleted"

fclean:	
	rm -f  $(NAME) $(OBJS)
	@echo "$(NAME) deleted"

re:		fclean all

.PHONY: all, clean, fclean, re