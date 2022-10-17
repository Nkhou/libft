NAME = libft.a
CC = gcc
SRCS = 	ft_isdigit.c\
		ft_memmove.c\
		ft_strdup.c\
		ft_strncmp\
		ft_toupper.c\
		ft_isprint.c\
		ft_memset.c\
		ft_striteri.c\
		ft_strncmp.c\
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
		strlcpy.c\
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

$(NAME): libft.a

OBJCTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJCTS) libft.h
	ar crs $(NAME) $(OBJCTS)

$(OBJCTS): $(SRCS)
	$(CC) -c $(SRCS)

clean:
	$(RM) $(OBJCTS)

fclean: clean
	$(RM) libft.a

re: fclean all

