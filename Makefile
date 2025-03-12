# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odruke-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/06 22:40:42 by odruke-s          #+#    #+#              #
#    Updated: 2025/03/06 23:15:57 by odruke-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

FT_PRINTF_LIBDIR = ./ft_printf/

LIBFTDIR = ./libft/

FT_PRINTF_LIB = $(FT_PRINTF_LIBDIR)printf.a

LIBFT_LIB = $(LIBFTDIR)libft.a

FILES = main\
		handle_error\
		parsing\
		fill_lists\
		bubble\
		utils\
		swap\

SRCDIR = ./src/

INCDIR = ./inc/

SRC = $(addprefix $(SRCDIR), $(addsuffix .c,$(FILES)))

OBJ = $(SRC:.c=.o)

INC = $(INCDIR)push_swap.h

all: aux_librarys $(NAME)

$(NAME): $(OBJ) $(FT_PRINTF_LIB) $(LIBFT_LIB)
	$(CC) $(OBJ) $(FT_PRINTF_LIB) $(LIBFT_LIB) -o $@

%.o: %.c
	$(CC) -I$(INCDIR) $(CFLAGS) -c $< -o $@

aux_librarys:
	make -C $(FT_PRINTF_LIBDIR) all
	make -C $(LIBFTDIR) all

clean:
	rm -rf $(OBJ)
	make -C $(FT_PRINTF_LIBDIR) clean
	make -C $(LIBFTDIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(FT_PRINTF_LIBDIR) fclean 
	make -C $(LIBFTDIR) fclean 

re: fclean all

.PHONY: clean fclean re all
