#include <cstdio>

#ifndef BOARD_HPP_
#define BOARD_HPP_
class Board {
  public:
  	Board();
	~Board();
	void printBoard();
  	char board[3][3] = {
		{'*', '*', '*'},
		{'*', '*', '*'},
		{'*', '*', '*'}
	};
};
#endif // BOARD_HPP_
