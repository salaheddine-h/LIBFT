# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salhali <salhali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:59:56 by salhali           #+#    #+#              #
#    Updated: 2024/11/16 20:28:06 by salhali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

CFLAGS = -Wall -Wextra -Werror

cc = cc

S_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_memset.c ft_atoi.c ft_bzero.c ft_strdup.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_strjoin.c ft_strnstr.c ft_substr.c ft_itoa.c ft_calloc.c ft_memmove.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_split.c

O_OBJ = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isprint.o ft_isascii.o ft_toupper.o ft_tolower.o ft_strlen.o ft_strlcpy.o ft_strlcat.o ft_strncmp.o ft_strrchr.o ft_strchr.o ft_memset.o ft_atoi.o ft_bzero.o ft_strdup.o ft_putchar_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putnbr_fd.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_strjoin.o ft_strnstr.o ft_substr.o ft_itoa.o ft_calloc.o ft_memmove.o ft_strtrim.o ft_strmapi.o ft_striteri.o ft_split.o


all : $(NAME)


$(NAME) : $(O_OBJ)
	ar rcs $(NAME) $(O_OBJ) 

%.o :  %.c
	$(cc) $(CFLAGS)  -c $< -o $@
clean :  
	rm -f $(O_OBJ)

fclean : clean 
	rm -f $(NAME)

re : fclean all 
