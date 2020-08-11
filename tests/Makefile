##
## EPITECH PROJECT, 2019
## PSU_my_printf_2019
## File description:
## Makefile
##

SRC	=	test_my_printf0.c\
		test_my_printf1.c\

NAME 	=	unit_tests

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -o

INC 	=	-I../include -I./include

CFLAGS	=	-W -Wall -Wextra -L../ -lmy

CRI	=	 --coverage -lcriterion

all:		$(NAME)

$(NAME):	$(SRC)
		$(CC)	$(NAME)	$(SRC)	$(CFLAGS)	$(INC)	$(CRI)

clean:
		rm -rf	$(OBJ)

fclean:		clean
		rm -f	$(NAME)
		rm *gc*

re:		fclean all

.PHONY:	all clean fclean re