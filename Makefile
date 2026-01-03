
SRC		=	src/Card.cpp	\
			src/Deck.cpp	\
			src/SkyjoDeck.cpp	\
			src/StandardDeck.cpp	\
			src/main.cpp

OBJ		=	$(SRC:.cpp=.o)

NAME	=	exec

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	NAME all $(NAME) clean fclean re