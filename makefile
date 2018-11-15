# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 18:38:17 by asamir-k          #+#    #+#              #
#    Updated: 2018/11/15 11:21:16 by asamir-k         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= fractol
GCC= GCC
HEADER= INCLUDES/fractol.h
FLAGS = -Wall -Werror -Wextra
LIB_PATH= INCLUDES/libft/
COMP= mlx
MLXLIB= -L mlx -lmlx -framework Opengl -framework Appkit
SRC=SRCS/main.c 			\
	SRCS/winsetup.c			\
	SRCS/keyinputs.c		\
	SRCS/pxldraw.c 			\
	SRCS/mandelbro.c		\
	SRCS/analpixel.c		\
	SRCS/cursor.c			\
	SRCS/julia.c			\
	SRCS/mandelcruz.c		\
	SRCS/batmandel.c		\
	SRCS/flower.c			\
	SRCS/ramhead.c			\
	SRCS/dragon.c			\
	SRCS/wavy.c				\
	SRCS/disone.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(OBJ): %.o: %.c $(HEADER)
	@gcc $(FLAGS) -o $@ -c $< -I $(LIB_PATH) -I ../INCLUDES

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) -lm -L $(LIB_PATH) -lft $(MLXLIB) -I $(COMP)
	@echo "\033[1;34;2m FRIED CHICKEN READY TO BE EATEN ~ (__)=3 ~\033[0m"
	@echo "\033[0;31;3m                        (ALL RULE DONE)                               ~ (__)=3 ~\033[0m"

clean:
	@rm -f $(OBJ)
	@echo "\033[1;33;2m IVE EATEN HALF OF THE CHICKEN , ONE WORD AND WINGS ERADICATION WILL BE ORDERED \033[0m"
	@echo "\033[0;31;3m                        (CLEAN RULE DONE)                             ~ (__)=3 ~ \033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;31;2m JOB DONE SERGEANT WingZLord NO MORE WINGS ARE DETECTED IN THE bckt (-_-)ゞ\033[0m"
	@echo "\033[0;31;3m                        (FCLEAN RULE DONE)                            ~ (__)=3  ~\033[0m"

re: fclean all
	@echo "\033[0;35;2m BTW I'VE SUCCESSFULLY REFILL 24 WINGS JUST FOR YOU (♥_♥)ゞ\033[0m"
	@echo "\033[0;31;3m                        (RE RULE DONE)                                ~ (__)=3  ~\033[0m"
