# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asvirido <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/03 19:00:41 by asvirido          #+#    #+#              #
#    Updated: 2017/02/13 15:05:24 by asvirido         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -c -Wall -Wextra -Werror -O2

HEADER = libft.h

SRCS = ft_putnbr.c ft_putchar.c ft_putstr.c ft_isalpha.c ft_atoi.c ft_bzero.c \
	   ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c  \
	   ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
	   ft_memset.c ft_strchr.c ft_strcmp.c ft_strlen.c ft_strncmp.c\
	   ft_strnstr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_strrchr.c\
	   ft_strdup.c ft_strcpy.c ft_strncpy.c  ft_strcat.c ft_strncat.c  \
	   ft_strlcat.c  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c\
	   ft_strclr.c ft_striter.c ft_striteri.c  ft_strmap.c ft_strmapi.c \
	   ft_strequ.c  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c\
	   ft_strsplit.c ft_itoa.c  ft_putendl.c ft_putnbr.c ft_putchar_fd.c\
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c\
	   ft_lstdelone.c ft_lstdel.c  ft_lstadd.c ft_lstiter.c ft_lstmap.c\
	   ft_max.c ft_min.c ft_button.c ft_isnegativ.c ft_strnlen.c\
	   get_next_line.c ft_print.c

BINS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(BINS)
	 ar	rc	$(NAME)	$(BINS)
	 ranlib $(NAME)

%.o: %.c $(HEADER)
	 gcc	$(FLAGS)	-o	$@ $<

clean:
	  /bin/rm	-f	$(BINS)

fclean: clean
	  /bin/rm	-f	$(NAME)

re: fclean all
