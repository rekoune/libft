CFILES = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_isalpha.c ft_isprint.c ft_strlen.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memset.c  ft_strncmp.c ft_toupper.c ft_isalnum.c ft_isdigit.c ft_strchr.c  ft_strrchr.c
BFILES = ft_lstmap_bonus.c ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
TOOBJ = $(CFILES:.c=.o)
BOOBJ = $(BFILES:.c=.o)

all: $(NAME)

$(NAME): $(TOOBJ)
	ar rcs $(NAME) $(TOOBJ)
bonus: $(BOOBJ)
$(BOOBJ) :
	$(CC) $(CFLAGS) -c $(BFILES)
	ar rcs $(NAME) $(BOOBJ)
clean:
	rm -f $(TOOBJ) $(BOOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
	
