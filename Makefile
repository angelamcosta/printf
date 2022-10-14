NAME	=	libftprintf.a

CC	=		gcc

CFLAGS	=	-Wall -Werror -Wextra

LIBFT = libft

HEADER = ft_printf.h -L./libft -lft

RM	=		rm -f

SRC	=		ft_itoa.c ft_printf.c ft_putchar_fd.c/
ft_putnbr_fd.c ft_putstr_fd.c

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			cp libft/libft.a ./$(NAME)
			ar rcs $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean	$(NAME)
