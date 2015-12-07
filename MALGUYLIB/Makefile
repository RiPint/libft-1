#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nverdonc <nverdonc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/12 20:54:52 by nverdonc          #+#    #+#              #
#    Updated: 2015/03/20 03:29:25 by shabbach         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memalloc.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_tolower.c \
	ft_toupper.c 

OBJ = $(SRC:.c=.o)
CC = /usr/bin/gcc
CFLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f
ECHO = /bin/echo -e

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@$(ECHO) '> Compiled'

clean   :
	-@$(RM) $(OBJ)
	-@$(RM) *~
	@$(ECHO) '> Directory cleaned'

all:	$(NAME)

fclean:	clean
	-@$(RM) $(NAME)
	@$(ECHO) '> Remove executable'

re:	fclean all

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<