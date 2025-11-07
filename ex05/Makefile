


NAME = Harl

SRC = main.cpp Harl.cpp

OBJ = ${SRC:.cpp=.o}

CPP = c++ -Wall -Werror -Wextra -std=c++98

all : ${NAME}

${NAME} : ${OBJ}
	${CPP} ${OBJ} -o $@

%.o:%.cpp Harl.h 
	${CPP} -c $< -o $@ 

re : fclean all

clean :
	rm -f ${OBJ}

fclean : clean 
	rm -f ${NAME}

