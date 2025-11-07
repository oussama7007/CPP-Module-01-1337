


NAME = Harl

SRC = main.cpp Harl.cpp

OBJ = ${SRC:.cpp=.o}

CPP = c++ -Wall -Werror -Wextra -std=c++98

all : ${NAME}

${NAME} : ${OBJ}
	${CPP} ${OBJ} -o $@

%.cpp:%.o Harl.h 
	${CPP} ${}