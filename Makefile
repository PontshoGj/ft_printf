NAME=ft_printf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror -c -I .

RM=rm -f

SRC=ft_outint.c ft_outstr.c ft_outuint.c ft_outdoub.c ft_printf.c ft_printstr.c \
ft_printhexa.c ft_printpadd.c ft_printhandler.c \

OBJ=$(SRC:.c=.o)

$(NAME): 
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	$(CC) main.c ft_printf.a libft/libft.a 

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all