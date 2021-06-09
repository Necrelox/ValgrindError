##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

all:
		@make --no-print-directory -C error1
		@make --no-print-directory -C error2
		@make --no-print-directory -C error3
		@make --no-print-directory -C error4
		@make --no-print-directory -C error5
		@make --no-print-directory -C error6

clean:
		@make --no-print-directory clean -C error1
		@make --no-print-directory clean -C error2
		@make --no-print-directory clean -C error3
		@make --no-print-directory clean -C error4
		@make --no-print-directory clean -C error5
		@make --no-print-directory clean -C error6

fclean	:	clean
		@make --no-print-directory fclean -C error1
		@make --no-print-directory fclean -C error2
		@make --no-print-directory fclean -C error3
		@make --no-print-directory fclean -C error4
		@make --no-print-directory fclean -C error5
		@make --no-print-directory fclean -C error6

re	:
		@make --no-print-directory re -C error1
		@make --no-print-directory re -C error2
		@make --no-print-directory re -C error3
		@make --no-print-directory re -C error4
		@make --no-print-directory re -C error5
		@make --no-print-directory re -C error6
