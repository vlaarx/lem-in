.PHONY: clean fclean re all

NAME= libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
	ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c \
	ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
	ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
	ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
	ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
	ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c \
	ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_wordcount.c \
	get_next_line.c ft_change_system.c ft_change_system_over_ten.c \
	ft_itoa_long.c ft_itoa_un_long.c ft_bit_count.c ft_count_digits.c \
	ft_wchar_len.c ft_fill_zero.c ft_atoi_long.c ft_istrstr.c ft_strcjoin.c \
	ft_sjoin_and_free.c del_matrix.c

SRCDIR 	= sources/

OBJDIR 	= objectives/

HEADER 	= headers/

SRCS 	= $(addprefix $(SRCDIR), $(SRC))

OBJS 	= $(addprefix $(OBJDIR), $(SRC:.c=.o))

CC		= -gcc

FLAGS 	= -Wall -Wextra -Werror 

all: 		$(NAME)

$(NAME): 	$(OBJS)
			@ar rc $(NAME) $(OBJS)
			@ranlib $(NAME)

$(OBJS): 	$(OBJDIR)%.o: $(SRCDIR)%.c
			@mkdir -p $(OBJDIR)
			@$(CC) $(FLAGS) -I $(HEADER) -c $< -o $@

clean:
			@/bin/rm -f $(OBJS)
			@rm -rf $(OBJDIR)

fclean: 	clean
			@/bin/rm -f $(NAME)

re: 		fclean all
