# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/03 16:22:35 by ppipes            #+#    #+#              #
#    Updated: 2021/03/24 11:05:19 by ppipes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = functions
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)
$(NAME): $(OBJ)
	clang++ $(OBJ) $(CFLAGS) -o $(NAME)
%.o: %.cpp
	clang++ $(CFLAGS) -c $<
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
