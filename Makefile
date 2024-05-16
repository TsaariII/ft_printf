NAME	= libftprintf.a

SRC		= ft_printf.c/
		check_f.c/
		is_char.c/
		is_hex.c/
		is_nbr.c/
		is_pointer.c/
		is_str.c/
		is_unsignbr.c

HEAD	= ft_printf.h

CC		= cc

FLAGS	= -Wall -Werror -Wextra

OBJS	= $(SRC: .c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEAD)
		ar -rcs $(NAME) $(OBJS)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)
		@rm -f libftprintf.a

re: fclean all

.PHONY: all re fclean clean