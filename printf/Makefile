# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 16:49:20 by aricholm          #+#    #+#              #
#    Updated: 2021/07/08 16:00:58 by aricholm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Werror -Wall -Wextra
NAME = libftprintf.a
LIBFT = ./libft/libft.a
OBJS = \
ft_printf.o printf_utils.o \
printf_flags.o printf_width.o printf_modifier.o printf_conversions.o \
printf_hexa.o decimal_utils.o \
use_string.o use_char.o use_hexa.o use_decimal.o

SRC = \
ft_printf.c printf_utils.c \
printf_flags.c printf_width.c printf_modifier.c printf_conversions.c \
printf_hexa.c decimal_utils.o \
use_string.c use_char.c use_hexa.c use_decimal.c \
test.c
BONUS = \

all : $(NAME)

bonus : $(NAME)
	
$(NAME): $(OBJS) $(LIBFT)
	$(MAKE) -C ./libft
	cp $(LIBFT) $(NAME)
	ar rcs $@ $^

$(LIBFT):
	$(MAKE) -C ./libft

test: $(OBJS) $(LIBFT)
	$(CC) $(SRC) $(LIBFT) && ./a.out
	
%.o: %.c
	$(CC) -c $(CFLAGS)  -o $@  $^

clean:
	echo "Remove .o  ..."
	rm -f $(OBJS) $(BONUS)

fclean: clean
	echo "Remove lib ..."
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus