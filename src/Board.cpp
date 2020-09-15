#include "Board.hpp"

Board::Board() {}

Board::~Board() {}

void Board::printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf("%c ", this->board[i][j]);
		printf("\n");
	}
}
