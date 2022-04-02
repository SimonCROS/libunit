# Folders

override BIN		:= bin
override SRC		:= src
override INC		:= includes

override CONV		:= convert
override LIST		:= list
override ITERAT		:= iterator
override MATH		:= math
override MEMORY		:= memory
override PRINT		:= print
override STRING		:= string
override UTIL		:= util

# Properties

NAME				= libft.a

# Commands

override CC			:= gcc
override RM			:= rm -rf
override CFLAGS		:= -Wall -Wextra -Werror
override INCLUDES	:= -I$(INC)

# Sources

override CONV_SRCS	:= $(addprefix $(CONV)/,	\
				ft_atoi.c						\
				ft_atoul.c						\
				ft_iton.c						\
				ft_iton_to.c					\
				ft_atof.c						\
				)

override ITERAT_SRCS:= $(addprefix $(ITERAT)/,	\
				iterator_has_next.c				\
				iterator_new.c					\
				iterator_next.c					\
				iterator_reset.c				\
				)

override LIST_SRCS	:= $(addprefix $(LIST)/,	\
				as_array.c						\
				as_list.c						\
				lst_add_all.c					\
				lst_clear.c						\
				lst_concat.c					\
				lst_copy.c						\
				lst_delete.c					\
				lst_destroy.c					\
				lst_filter.c					\
				lst_first.c						\
				lst_foreach.c					\
				lst_get.c						\
				lst_get_entry.c					\
				lst_index_of.c					\
				lst_insert.c					\
				lst_is_empty.c					\
				lst_last.c						\
				lst_last_entry.c				\
				lst_map.c						\
				lst_new.c						\
				lst_new_entry.c					\
				lst_pop.c						\
				lst_push.c						\
				lst_reduce.c					\
				lst_remove.c					\
				lst_set.c						\
				lst_shift.c						\
				lst_shift_entry.c				\
				lst_size.c						\
				lst_slice.c						\
				lst_splice.c					\
				lst_unshift.c					\
				)

override MATH_SRCS	:= $(addprefix $(MATH)/,	\
				ft_abs.c						\
				ft_charlen.c					\
				ft_shortlen.c					\
				ft_intlen.c						\
				ft_longlen.c					\
				ft_longlonglen.c				\
				ft_max.c						\
				ft_min.c						\
				)

override MEMORY_SRCS:= $(addprefix $(MEMORY)/,	\
				ft_bzero.c						\
				ft_calloc.c						\
				ft_memccpy.c					\
				ft_memchr.c						\
				ft_memcmp.c						\
				ft_memcpy.c						\
				ft_memmove.c					\
				ft_memset.c						\
				)

override PRINT_SRCS	:= $(addprefix $(PRINT)/,	\
				ft_putchar.c					\
				ft_putendl.c					\
				ft_puthex.c						\
				ft_putnbr.c						\
				ft_putstr.c						\
				)

override STRING_SRCS:= $(addprefix $(STRING)/,	\
				ft_isalnum.c					\
				ft_isalpha.c					\
				ft_isascii.c					\
				ft_isdigit.c					\
				ft_isprint.c					\
				ft_split.c						\
				ft_strchr.c						\
				ft_strinsert.c					\
				ft_strdup.c						\
				ft_strindex_of.c				\
				ft_strjoin.c					\
				ft_strlcat.c					\
				ft_strcpy.c						\
				ft_strlen.c						\
				ft_strcmp.c						\
				ft_strmapi.c					\
				ft_strnstr.c					\
				ft_strtrim.c					\
				ft_substr.c						\
				ft_tolower.c					\
				ft_toupper.c					\
				ft_strto.c						\
				ft_strcnt.c						\
				str_is_empty.c					\
				str_append.c					\
				str_new.c						\
				str_remove.c					\
				)

override UTIL_SRCS	:= $(addprefix $(UTIL)/,	\
				ft_identity.c					\
				ft_ternary.c					\
				null_consumer.c					\
				)

override SRCS		:=							\
				$(CONV_SRCS)					\
				$(LIST_SRCS)					\
				$(ITERAT_SRCS)					\
				$(MATH_SRCS)					\
				$(MEMORY_SRCS)					\
				$(PRINT_SRCS)					\
				$(STRING_SRCS)					\
				$(UTIL_SRCS)					\

override OBJS		:= $(addprefix $(BIN)/, $(SRCS:.c=.o))

override HEADERS	:= $(addprefix $(INC)/,		\
				libft.h							\
				)

all:		$(NAME)

$(BIN)/%.o:	$(SRC)/%.c $(HEADERS)
			@mkdir -p $(dir $@);
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME):	$(OBJS)
			ar rcs $@ $?

clean:
			$(RM) $(OBJS)
			find $(BIN) -type d -empty -delete

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
