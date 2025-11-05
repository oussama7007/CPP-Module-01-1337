
NAME = rep

CPP = c++ -Wall -Werror -Wextra

src = main.cpp

obj = ${src:.cpp=.o}

all : ${NAME}

${NAME} :

%.o:%.cpp 
	${CPP} -c $< -o $@

clean :
	rm -f $(obj)

fclean : clean
	rm -f ${NAME}
