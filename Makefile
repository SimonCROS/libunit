LINUX			:= 0

# Folders

override SRC		:= framework
override INC		:= framework/includes
override TEST		:= test/
override REAL_TEST	:= real_test/

# Properties

NAME			= libunit.a

# Commands

override AR		:= ar rcs

override CC		:= gcc
override CFLAGS		:= #-Wall -Wextra -Werror
override INCLUDES	:= -I$(INC) -Ilibft/includes

override LIBFT		:= libft/libft.a

# Sources

override SRCS		:=			\
				test.c		\

override OBJS		:= $(addprefix obj/, $(SRCS:.c=.o))

override OBJDIRS	:= $(sort $(dir $(OBJS)))

all:		libft $(NAME)

test:
			@$(MAKE) -C tests test

libft:
			@$(MAKE) -C libft

obj/%.o:	$(SRC)/%.c $(INC)/libunit.h libft/includes/libft.h Makefile
			@mkdir -p $(dir $@);
			$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

$(OBJS):	| $(OBJDIRS)

$(OBJDIRS):
			mkdir -p $@

$(NAME):	$(OBJS) $(LIBFT)
			cp libft/libft.a $@
			ar rcs $@ $(OBJS)

clean:
			@$(MAKE) -C libft clean
			rm -rf obj

fclean:		clean
			@$(MAKE) -C libft fclean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all test libft clean fclean re
