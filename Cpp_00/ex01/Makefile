# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 03:33:32 by mhanda            #+#    #+#              #
#    Updated: 2023/01/15 07:38:30 by mhanda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp

OBJF = $(SRC:.cpp=.o)

NAME = phonebook

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98


$(NAME) : $(OBJF) Contact.hpp PhoneBook.hpp
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

all : $(NAME)

clean :
		rm -f $(OBJF)
fclean : clean
		rm -f $(NAME)
re : fclean all