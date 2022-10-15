NAME	=	libftprintf.a

CC	=		gcc

CFLAGS	=	-Wall -Werror -Wextra

RM	=		rm -f

HEADER = 	 ft_printf.h

SRC	=		ft_printf.c ft_itoa.c ft_putchar_fd.c\
ft_putnbr_base.c ft_putnbr_fd.c ft_putstr_fd.c

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean	$(NAME)
