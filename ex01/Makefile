# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayylaaba <ayylaaba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 00:32:46 by ayylaaba          #+#    #+#              #
#    Updated: 2023/12/18 09:03:05 by ayylaaba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp			\

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
