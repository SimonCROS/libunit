# Properties

NAME			:= tests.out

# Commands

override CPPC		:= gcc
override CPPFLAGS	:= -Wall -Wextra -Werror

# Sources

override SRCS		:=						\
				main.c					\
				logs/00_launcher.c			\
				logs/01_sigsegv_test.c			\
				logs/02_ok_test.c			\
				logs/03_ko_test.c			\
				logs/04_sigbus_test.c

override LIBS		:=						\
				../libunit.a

override HEADERS	:=						\
				logs_tests.h				\
				../framework/includes/libunit.h		\
				../libft/includes/libft.h

override INCLUDES	:=						\
				$(addprefix -I,$(dir $(HEADERS)))

override HEADERS	:= $(HEADERS)

override OBJS		:= $(addprefix build/,$(SRCS:.c=.o))

override OBJDIRS	:= $(sort $(dir $(OBJS)))

# Rules

all:		libunit $(NAME)

test:		all
			./$(NAME)

$(OBJS):	| $(OBJDIRS)

$(OBJDIRS):
			mkdir -p $@

libunit:
			@$(MAKE) -C ..

build/%.o:	%.c $(HEADERS) Makefile
			$(CPPC) $(CPPFLAGS) $(INCLUDES) -c -o $@ $<

$(NAME):	$(OBJS) $(LIBS)
			$(CPPC) $(CPPFLAGS) -o $@ $(OBJS) $(LIBS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all test libunit clean fclean re
