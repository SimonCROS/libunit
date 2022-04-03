# Properties

NAME			:= tests.out

# Commands

override CPPC		:= gcc
override CPPFLAGS	:= -Wall -Wextra -Werror

# Sources

override SRCS		:=						\
				main.c					\
				ft_strjoin/00_launcher.c		\
				ft_strjoin/01_basic_test.c		\
				ft_strjoin/02_null_test.c		\
				ft_strjoin/03_big_test.c		\
				ft_strjoin/04_strange_test.c		\
				ft_strjoin/05_short_test.c		\
				ft_strjoin/06_null_test2.c		\
				ft_strjoin/07_null_test3.c		\
				ft_strjoin/08_null_test4.c		\
				ft_strjoin/09_null_test5.c		\
				ft_strjoin/10_null_test6.c		\
				ft_strjoin/11_basic_test2.c		\
				ft_strjoin/12_basic_test3.c		\
				ft_strjoin/13_basic_test4.c		\
				ft_strjoin/14_unicode_test.c		\
				ft_strjoin/15_unicode_test2.c

override LIBS		:=						\
				../libunit.a

override HEADERS	:=						\
				real_tests.h				\
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
