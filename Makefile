NAME	=	libftprintf.a

CC	=		gcc

CFLAGS	=	-Wall -Werror -Wextra

LIBFT = libft

HEADER = ft_printf.h -L./libft -lft

RM	=		rm -f

SRC	=		ft_printf.c

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
