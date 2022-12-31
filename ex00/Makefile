# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 03:33:32 by mhanda            #+#    #+#              #
#    Updated: 2022/12/31 02:28:52 by mhanda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJF = $(SRC:.cpp=.o)

NAME = megaphone

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJF)
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

clean :
		rm -f $(OBJF)
fclean :
		rm -f $(NAME) $(OBJF)
re : fclean all