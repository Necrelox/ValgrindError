##
## EPITECH PROJECT, 2021
## B-NWP-400-NCE-4-1-myteams-anthony.goti
## File description:
## Makefile
##


NAME	=	../error6.out
CC		=	@gcc
SRC		=	$(wildcard ./*c)

OBJ		=	${SRC:.c=.o}
CFLAGS	=	-g3 -Wall -Wextra -pedantic -pedantic-errors -O0
INCLUDE	=

.c.o:
	@echo "\e[1;91m[\e[1;92mOK\e[1;91m]\e[0m" "\e[1;91m Compile\e[1;93m" $< "\e[1;91mto\e[1;92m" $@ "\e[0m"
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(OBJ)
	@echo "\e[1;91m[\e[1;92mOK\e[1;91m]\e[0m" "\e[1;91m LINK\e[1;93m" $< "\e[1;91mto\e[1;92m" $(NAME) "\e[0m"
	$(CC) -o $(NAME) $(OBJ)


clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all




