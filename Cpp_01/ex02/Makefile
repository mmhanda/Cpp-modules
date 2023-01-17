# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 10:43:25 by mhanda            #+#    #+#              #
#    Updated: 2023/01/17 13:01:00 by mhanda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp 

OBJF = $(SRC:.cpp=.o)

NAME = brains

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJF)
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

%.o: %.cpp
		$(CLANG) $(FLAGS) -o $@ -c $<

all : $(NAME)

clean :
		rm -f $(OBJF)
fclean : clean
		rm -f $(NAME)
re : fclean all