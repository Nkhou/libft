# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 15:49:46 by nkhoudro          #+#    #+#              #
#    Updated: 2022/11/03 20:54:15 by nkhoudro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_isdigit.c\
		ft_memmove.c\
		ft_strdup.c\
		ft_strncmp.c\
		ft_toupper.c\
		ft_isprint.c\
		ft_memset.c\
		ft_striteri.c\
		ft_atoi.c\
		ft_putchar_fd.c\
		ft_strjoin.c\
		ft_bzero.c\
		ft_itoa.c\
		ft_putendl_fd.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_calloc.c\
		ft_putnbr_fd.c\
		ft_strlcpy.c\
		ft_strrchr.c\
		ft_isalnum.c\
		ft_memchr.c\
		ft_putstr_fd.c\
		ft_strtrim.c\
		ft_isalpha.c\
		ft_memcmp.c\
		ft_split.c\
		ft_strlen.c\
		ft_substr.c\
		ft_isascii.c\
		ft_memcpy.c\
		ft_strchr.c\
		ft_strmapi.c\
		ft_tolower.c\

BONUS = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c\


OBJCTS = $(SRCS:.c=.o)
OBJCTSBONUS = $(BONUS:.c=.o)

all: $(NAME)

bonus: $(OBJCTSBONUS)
	ar crs $(NAME) $(OBJCTSBONUS)

$(NAME): $(OBJCTS) 
	ar crs $(NAME) $(OBJCTS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJCTS) $(OBJCTSBONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re bonus
