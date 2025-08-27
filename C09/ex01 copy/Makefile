# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/27 22:17:37 by tozaki            #+#    #+#              #
#    Updated: 2025/08/27 22:42:26 by tozaki           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I includes
RM		=	rm -f

SRCDIR	=	srcs
INCDIR	=	includes
SRCS	=	$(SRCDIR)/ft_putchar.c	\
			$(SRCDIR)/ft_swap.c		\
			$(SRCDIR)/ft_putstr.c		\
			$(SRCDIR)/ft_strlen.c		\
			$(SRCDIR)/ft_strcmp.c
OBJS	=	$(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

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