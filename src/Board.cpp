#include "Board.hpp"

Board::Board() {}

Board::~Board() {}

void Board::printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			std::cout << this->board[i][j] << " ";
		std::cout << std::endl;
	}
}
