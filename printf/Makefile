NAME	=	libftprintf.a

SRC	=	ft_printf.c			\
		ft_print_format.c	\
		ft_print_char.c		\
		ft_print_digit.c	\
		ft_print_str.c		\
		ft_print_integer.c	\
		ft_print_u_d.c		\
		ft_print_bignum.c	\
		ft_print_hexa.c		\

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re