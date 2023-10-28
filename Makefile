# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 10:33:52 by rprocopi          #+#    #+#              #
#    Updated: 2023/10/28 10:43:39 by rprocopi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c			ft_bzero.c			ft_calloc.c		ft_isalnum.c 	ft_isalpha.c	\
			ft_isascii.c		ft_isdigit.c		ft_isprint.c	ft_memchr.c		ft_memcmp.c		\
			ft_memcpy.c			ft_memmove.c		ft_memset.c		ft_split.c		ft_strchr.c		\
			ft_strdup.c			ft_strjoin.c		ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		\
			ft_strncmp.c		ft_strnstr.c		ft_strrchr.c	ft_strtrim.c	ft_substr.c		\
			ft_tolower.c		ft_toupper.c		ft_itoa.c		ft_putchar_fd.c	ft_putendl_fd.c	\
			ft_putnbr_fd.c		ft_putstr_fd.c		ft_striteri.c	ft_strmapi.c

BSRCS	=	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c	ft_lstdelone.c	ft_lstiter.c	\
			ft_lstlast.c		ft_lstmap.c			ft_lstnew.c		ft_lstsize.c

OBJS	=	$(SRCS:.c=.o)	$(BSRCS:.c=.o)

BOBJ	=	$(BSRCS:.c=.o)

CC	=	cc

FLAGS	=	-Wall -Werror -Wextra -fPIE -g #-fsanitize=address

%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@
all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

bonus: $(BOBJ)
	ar r $(NAME) $(BOBJ)

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	rm -rf $(OBJS)	

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus