# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 03:33:32 by mhanda            #+#    #+#              #
#    Updated: 2022/12/31 02:28:40 by mhanda           ###   ########.fr        #
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
fclean :
		rm -f $(NAME)
re : fclean all