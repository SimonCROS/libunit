all:
	clang -Wall -Wextra -Werror main.c libft/libft.a framework/*.c tests/**/*.c real_tests/**/*.c -I. -Ilibft/includes -Iframework/includes
