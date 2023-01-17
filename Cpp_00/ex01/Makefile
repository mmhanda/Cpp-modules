# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 03:33:32 by mhanda            #+#    #+#              #
#    Updated: 2023/01/17 04:44:39 by mhanda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJF = $(SRC:.cpp=.o)

NAME = phonebook

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJF) PhoneBook.hpp Contact.hpp
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

%.o: %.cpp
		$(CLANG) $(FLAGS) -o $@ -c $<

all : $(NAME)

clean :
		rm -f $(OBJF)
fclean : clean
		rm -f $(NAME)
re : fclean all