NAME	=	libftprintf.a

CC	=		gcc

CFLAGS	=	-Wall -Werror -Wextra

LIBFT = 	libft

HEADER = 	ft_printf.h -L./libft -lft

RM	=		rm -f

HEADER = 	ft_printf.h

SRC	=		ft_printf.c ft_putnbr_base.c ft_print_s.c\
ft_printf_d.c

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			cp libft/libft.a ./$(NAME)
			ar rcs $(NAME) $(OBJ)
			ranlib $(NAME)

.o.c:
	@$(CC) $(CFLAGS) -I $(HEADER) -o -c

clean:
			$(RM) $(OBJ)
			make clean -C $(LIBFT)

fclean:	clean
			$(RM) $(NAME)
			make fclean -C $(LIBFT)

re:	fclean	all

.PHONY: all clean fclean re