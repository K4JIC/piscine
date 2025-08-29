# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/28 15:21:04 by tozaki            #+#    #+#              #
#    Updated: 2025/08/28 20:18:54 by tozaki           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I includes
RM		=	rm -f

SRCS	=	ft_do-op.c	\
			calc.c		\
			utils.c		\

OBJS	=	$(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all