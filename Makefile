# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makafile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asvirido <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/04 14:27:54 by asvirido          #+#    #+#              #
#    Updated: 2017/02/17 12:00:54 by asvirido         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAGS = -c -Wall -Wextra -Werror -O2

MLX = -lmlx -framework OpenGL -framework AppKit

HEADER = head.h

SRC = ./SRC/main.c ./SRC/error.c ./SRC/step_1_read.c ./SRC/step_2_record.c\
	  ./SRC/open_fd.c ./SRC/ft_atoi_hex.c ./SRC/object_mlx.c\
	  ./SRC/create_img.c ./SRC/fill_screen.c ./SRC/draw_line_right.c\
	  ./SRC/projection.c ./SRC/pixel_line.c ./SRC/draw_line_down.c\
	  ./SRC/zoom.c ./SRC/draw.c	./SRC/up_and_down.c ./SRC/rotation_x.c\
	  ./SRC/rotation_z.c ./SRC/rotation_y.c ./SRC/update.c ./SRC/migration.c\

BINS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(BINS)
	make -C libft/
	gcc -o $(NAME) $(BINS) -L. libft/libft.a  $(MLX)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -o  $@ $<

clean:
	 /bin/rm -f $(BINS)
	 make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C libft/ fclean

re: fclean all

all_clean: all clean
