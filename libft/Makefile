# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 10:30:07 by spliesei          #+#    #+#              #
#    Updated: 2018/01/19 15:45:16 by spliesei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strmapi.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_atoi.c ft_strcat.c ft_strdup.c ft_strmap.c ft_strncat.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_iscntrl.c ft_isgraph.c ft_ispunct.c ft_isxdigit.c ft_memalloc.c ft_memcpy.c ft_memset.c ft_putnbr.c ft_strcpy.c ft_strlen.c ft_strnew.c ft_tolower.c ft_toupper.c ft_memdel.c ft_strdel.c ft_strsplit.c ft_strtrim_char.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_strnjoin.c


CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(CFILES) -I libft.h
	ar rc $(NAME) $(CFILES:.c=.o)

clean:
	rm -f $(CFILES:.c=.o)

fclean: clean
	rm -f $(NAME)

re:
	make fclean
	make
