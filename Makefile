NAME	=	libftprintf.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

LIBFT	=	libft

SRC		=	ft_printf_d.c ft_printf_h.c ft_printf_p.c\
ft_printf_s.c ft_printf_u.c ft_printf_x.c ft_printf.c\
ft_putnbr_base_x.c ft_putnbr_base.c

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			@ar -r $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)
			make clean -C $(LIBFT)

fclean:		clean
			$(RM) $(NAME)
			make fclean -C $(LIBFT)

re:			fclean all
