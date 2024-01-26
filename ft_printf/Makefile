SOURCES = ft_printf.c put_nbr.c putchar.c putstr.c put_hex.c

OBJECTS_FILES = ft_printf.o put_nbr.o putchar.o putstr.o put_hex.o
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc

all: $(NAME)

%.o: %.c ft_printf.h
		$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJECTS_FILES)
	ar -rc $(NAME) $(OBJECTS_FILES)

clean:
		rm -f $(OBJECTS_FILES)

fclean: clean
		rm -f $(NAME)

re: fclean	all