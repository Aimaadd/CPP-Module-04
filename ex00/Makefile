CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98 #-Wpedantic
NAME = Animal
FILES = main.cpp Dog.cpp Animal.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(FILES) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS)

re: clean all

fclean : clean 
	rm -f $(NAME)

.PHONY: all clean