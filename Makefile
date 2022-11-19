NAME	=	libftprintf.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

SRC		=	ft_printf.c

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)
			
clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
