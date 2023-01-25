# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 05:34:19 by mhanda            #+#    #+#              #
#    Updated: 2023/01/25 23:03:11 by mhanda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

OBJF = $(SRC:.cpp=.o)

NAME = polymorphism

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJF) Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

%.o: %.cpp
		$(CLANG) $(FLAGS) -o $@ -c $<

all : $(NAME)

clean :
		rm -f $(OBJF)
fclean : clean
		rm -f $(NAME)
re : fclean all