NAME = Zombie
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
RM = rm -f

SRCS =	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp 

OBJC = ${SRCS:.cpp=.o}

all: ${NAME}

.cpp.o:
	${CC} -c $< -o $(<:.cpp=.o) ${CFLAGS}

${NAME}: ${OBJC}
	${CC} ${CFLAGS} ${OBJC} -o ${NAME}

clean: 
	 ${RM} ${OBJC}

fclean: clean
	${RM} ${NAME}

re: fclean all