# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 13:17:36 by hde-andr          #+#    #+#              #
#    Updated: 2025/10/29 17:34:38 by hde-andr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFTNAME = libft.a
LIBFTDIR = ./libft

SRCS = ft_printf.c ft_print_c.c ft_print_x.c ft_print_d.c \
		ft_print_u.c ft_print_s.c ft_print_p.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	cc -Wall -Wextra -Werror -I. -c $< -o  $@

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)


$(NAME): makelibft $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean

re: fclean all

.PHONY: all clean fclean re
