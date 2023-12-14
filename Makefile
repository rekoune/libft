CFILES = ft_strlcat.c ft_strlcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_isalpha.c ft_isprint.c ft_strlen.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memset.c  ft_strncmp.c ft_toupper.c ft_isalnum.c ft_isdigit.c ft_strchr.c  ft_strrchr.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
TOOBJ = $(CFILES:.c=.o)

all: $(NAME) clean

$(NAME): $(TOOBJ)
	ar rcs $(NAME) $(TOOBJ)
%.o: %.c
	$(CC) -c $(FLAGS) $^ -o $@
	@echo "compayling"
clean:
	rm -f $(TOOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
	rm -f $(TOOBJ)
out:
	$(CC) $(CFLAGS) *.c -o out
	@echo ""
	@./out
	@echo ""
	@echo "deleting out"
	@rm -f out
