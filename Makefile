all:
	clang -Wall -Wextra -Werror main.c libft/libft.a framework/*.c tests/**/*.c real_tests/**/*.c -I. -Ilibft/includes -Iframework/includes

libft:
	make -C ./libft

framework:
	make -C ./framework

test:
	make -C ./test

real_test:
	make -C ./real_test
