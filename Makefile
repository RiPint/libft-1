#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nverdonc <nverdonc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/12 20:54:52 by nverdonc          #+#    #+#              #
#    Updated: 2016/01/07 19:08:36 by tiprata          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_lenbr.c \
	ft_line_count.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_strxdup.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstiter.c \
	ft_lstadd.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_dupnstrcat.c \
	ft_dupstrcat.c \
	ft_strnjoin.c

OBJ = $(SRC:.c=.o)
CC = /usr/bin/gcc
CFLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f
ECHO = /bin/echo -e

$(NAME)	: $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@$(ECHO) '> Compiled'

clean	:
				-@$(RM) $(OBJ)
				-@$(RM) *~
				@$(ECHO) '> Directory cleaned'

all:	$(NAME)

fclean:	clean
		-@$(RM) $(NAME)
		@$(ECHO) '> Remove executable'

re:	fclean all

.c.o	:
				$(CC) $(CFLAGS) -o $@ -c $<