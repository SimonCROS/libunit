all:
	clang -Wall -Wextra -Werror main.c libs/libft/libft.a libs/libunit/*.c tests/**/*.c real_tests/**/*.c -I. -Ilibs/libft/includes -Ilibs/libunit/includes
