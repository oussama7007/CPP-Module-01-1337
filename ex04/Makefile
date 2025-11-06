NAME = rep

CPP = c++ -Wall -Werror -Wextra -std=c++98

src = main.cpp

obj = ${src:.cpp=.o}

all : ${NAME}

${NAME} : ${obj}
	${CPP} ${obj} -o $@

%.o:%.cpp 
	${CPP} -c $< -o $@

clean :
	rm -f $(obj)

fclean : clean
	rm -f ${NAME}

re : fclean all 
#hello1orld