# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 05:34:19 by mhanda            #+#    #+#              #
#    Updated: 2023/02/15 04:24:25 by mhanda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

OBJF = $(SRC:.cpp=.o)

NAME = easyfind

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJF) easyfind.hpp
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

%.o: %.cpp
		$(CLANG) $(FLAGS) -o $@ -c $<

all : $(NAME)

clean :
		rm -f $(OBJF)
fclean : clean
		rm -f $(NAME)
re : fclean all