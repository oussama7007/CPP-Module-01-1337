

Name = WEOPON

CPP = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanB.cpp HumanA.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
	$(CPP) $(OBJ) -o $@

%.o:%.cpp Weapon.h HumanA.h HumanB.h 
	$(CPP) -c $< -o $@


clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(Name)

re : fclean all









