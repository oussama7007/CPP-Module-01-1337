

Name = Zombie

CPP = c++ -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp  newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ)
	$(CPP) $(OBJ) -o $@

%.o:%.cpp
	$(CPP) -c $< -o $@


clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(Name)

