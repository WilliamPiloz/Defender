##
## EPITECH PROJECT, 2020
## B-MUL-100-MPL-1-1-myrunner-william1.piloz
## File description:
## Makefile
##

CC	=	gcc -g3

CFLAGS	=	-W -Wall -Wextra

CPPFLAGS	 = 	-I./includes

LDFLAGS	=	-L/usr/include/SFML -lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio -lm

SRC	=	$(wildcard src/*.c)	\
		$(wildcard src/destroy/*.c)	\
		$(wildcard src/display/*.c)	\
		$(wildcard src/event/*.c)	\
		$(wildcard src/init/*.c)	\
		$(wildcard src/tools/*.c)	\
		$(wildcard src/mobs/*.c)	\
		$(wildcard src/towers/*.c)

OBJ	=	$(SRC:.c=.o)

PRJ	=	my_defender

all:	compile

compile:	$(OBJ)
		$(CC) -o $(PRJ) $(SRC) $(CPPFLAGS) $(LDFLAGS)

clean:
		 $(RM) $(OBJ)

fclean:	clean
		$(RM) $(OBJ)
		$(RM) $(PRJ)

re:	fclean all