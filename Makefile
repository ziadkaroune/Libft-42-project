 
SOURCE =   ft_atoi.c     ft_isascii.c  ft_memcpy.c   ft_strlcat.c  ft_strrchr.c \
        ft_bzero.c    ft_isdigit.c  ft_memmove.c  ft_strlcpy.c  ft_tolower.c \
        ft_calloc.c   ft_isprint.c  ft_memset.c   ft_strlen.c    ft_toupper.c \
        ft_isalnum.c  ft_memchr.c   ft_strchr.c   ft_strncmp.c  ft_isalpha.c \
        ft_memcmp.c   ft_strdup.c   ft_strnstr.c  ft_strtrim.c  ft_strjoin.c \
        ft_substr.c   ft_putstr_fd.c  ft_putchar_fd.c ft_putnbr_fd.c ft_itoa.c \
        ft_putendl_fd.c	ft_split.c ft_strmapi.c  ft_striteri.c

OBJS = $(SOURCE:.c=.o)

NAME	= libft.a
CC	= cc
CFLAGS	= -Werror -Wall -Wextra
RM	= rm -f

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?
	
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	re fclean clean all
