

Name = WEOPON

CPP = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
	$(CPP) $(OBJ) -o $@

%.o:%.cpp Weapon.h HumanA.h
	$(CPP) -c $< -o $@


clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(Name)

