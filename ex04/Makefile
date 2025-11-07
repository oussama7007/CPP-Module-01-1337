NAME = rep

CPP =  c++

FLAGS = -Wall -Werror -Wextra -std=c++98

src = main.cpp

obj = ${src:.cpp=.o}

all : ${NAME}

${NAME} : ${obj}
	${CPP} ${FLAGS} ${obj} -o $@

%.o:%.cpp 
	${CPP} ${FLAGS} -c $< -o $@

clean :
	rm -f $(obj)

fclean : clean
	rm -f ${NAME}

re : fclean all 
