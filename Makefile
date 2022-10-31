NAME	=	libftprintf.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

LIBFT	=	libft

SRC		=	ft_printf.c

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)/files
			cp -L $(LIBFT)/files/libft.a libftprintf.a
			ar -rcs $(NAME) $(OBJ)
			
clean:
			$(RM) $(OBJ)
			make clean -C $(LIBFT)/files

fclean:		clean
			$(RM) $(NAME)
			make fclean -C $(LIBFT)/files

re:			fclean all
