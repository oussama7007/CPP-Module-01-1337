

Name = Zombie

CPP = c++ -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

SRC = Zombie.cpp main.cpp  newZombie.cpp randomChump.cpp

all : $(Name)

$(Name) : $(OBJ)
	$(CPP) $(OBJ) -o $@

%.o:%.cpp
	$(CPP) -c $< -o $@


clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(Name)

