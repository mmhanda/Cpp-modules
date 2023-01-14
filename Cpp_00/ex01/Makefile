# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 03:33:32 by mhanda            #+#    #+#              #
#    Updated: 2023/01/14 23:00:16 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp

OBJF = $(SRC:.cpp=.o)

NAME = phonebook

CLANG = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror -std=c++98


$(NAME) : $(OBJF)
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

all : $(NAME)

clean :
		rm -f $(OBJF)
fclean : clean
		rm -f $(NAME)
re : fclean all