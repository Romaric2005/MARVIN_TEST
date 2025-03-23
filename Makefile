##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

SRC =	./src/107transfer.c \
	./src/main.c

all :
	gcc -o 107transfer $(SRC) -g3 -lm

clean :
	rm -f *~
	rm -f *#
	rm -f *.gcno
	rm -f *.gcda

fclean : clean
	rm -f 107transfer
	rm -f unit_tests
	rm -f coding-style-reports.log

re : fclean all

unit_tests : fclean
	gcc -o unit_tests ./src/107transfer.c tests/test_107transfer.c -lcriterion --coverage

tests_run : unit_tests
	./unit_tests
