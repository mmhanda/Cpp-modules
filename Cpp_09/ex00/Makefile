SRC = main.cpp BitcoinExchange.cpp

OBJF = $(SRC:.cpp=.o)

NAME = bitcoinexchange

CLANG = c++

FLAGS = -Wall -Wextra  -std=c++98
#-Werror

$(NAME) : $(OBJF) BitcoinExchange.hpp
		$(CLANG) $(FLAGS)  $(OBJF) -o $(NAME)

%.o: %.cpp
		$(CLANG) $(FLAGS) -o $@ -c $<

all : $(NAME)

clean :
		rm -f $(OBJF)
fclean : clean
		rm -f $(NAME)
re : fclean all