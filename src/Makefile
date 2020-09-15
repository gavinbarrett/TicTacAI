tictactoe: main.o Game.o Board.o
	g++ -Wall -Werror -std=c++11 main.o Game.o Board.o -o tictactoe

main.o: main.cpp Game.hpp Board.hpp
	g++ -Wall -Werror -std=c++11 -c main.cpp

Game.o: Game.cpp Game.hpp
	g++ -Wall -Werror -std=c++11 -c Game.cpp

Board.o: Board.cpp Board.hpp
	g++ -Wall -Werror -std=c++11 -c Board.cpp

clean:
	rm tictactoe *.o
