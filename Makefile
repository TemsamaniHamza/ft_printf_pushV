# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htemsama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 21:06:26 by htemsama          #+#    #+#              #
#    Updated: 2024/03/07 21:06:27 by htemsama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CC = cc

# CFLAGS = -Wall -Wextra -Werror

# SRC = ft_handel_d_i_u.c ft_handel_s_c.c ft_handel_x_X_p.c ft_handerall.c ft_printf.c

# LIBFT_SRC = libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c \
#             libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c \
#             libft/ft_itoa.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c \
#             libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c \
#             libft/ft_putendl_fd.c libft/ft_putstr_fd.c \
#             libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c \
#             libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c \
#             libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c \
#             libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c

# OBJ = $(SRC:.c=.o) $(LIBFT_SRC:libft/%.c=libft/%.o)

# NAME = libftprintf.a

# EXEC = myprogran

# all : $(EXEC)

# $(EXEC): $(OBJ) $(NAME)
# 	$(CC) $(CFLAGS) $^ -o $@

# $(NAME): $(OBJ)
# 	ar rcs $@ $^

# libft/%.o: libft/%.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean :
# 	rm -f $(OBJ) $(EXEC)

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

# .PHONY: all clean fclean re


# CC = cc

# CFLAGS = -Wall -Wextra -Werror

# SRC = ft_handel_d_i_u.c ft_handel_s_c.c ft_handel_x_X_p.c ft_handerall.c ft_printf.c

# LIBFT_SRC = libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c \
#             libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c \
#             libft/ft_itoa.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c \
#             libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c \
#             libft/ft_putendl_fd.c libft/ft_putstr_fd.c \
#             libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c \
#             libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c \
#             libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c \
#             libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c

# OBJ = $(SRC:.c=.o) $(LIBFT_SRC:libft/%.c=libft/%.o)

# NAME = libftprintf.a

# all : $(NAME)

# $(NAME): $(OBJ)
# 	ar rcs $@ $<

# libft/%.o: libft/%.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean :
# 	rm -f $(OBJ)

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

# .PHONY: all clean fclean re

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_handel_d_i_u.c ft_handel_s_c.c ft_handel_x_X_p.c ft_handerall.c ft_printf.c

LIBFT_SRC = libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c \
            libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c \
            libft/ft_itoa.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c \
            libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c \
            libft/ft_putendl_fd.c libft/ft_putstr_fd.c \
            libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c \
            libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c \
            libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c \
            libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c

OBJ = $(SRC:.c=.o) $(LIBFT_SRC:libft/%.c=libft/%.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

libft/%.o: libft/%.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
