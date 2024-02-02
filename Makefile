SRC = ft_printf.c \
		format_specifiers.c \
		print_characters.c \
		print_decimal_numbers.c \
		print_hexadecimal_numbers.c \

OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f
AR = ar rc
LIB_INDEX = ranlib

all: $(NAME)
	
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB_INDEX) $(NAME)

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

.PHONY: all re clean fclean 