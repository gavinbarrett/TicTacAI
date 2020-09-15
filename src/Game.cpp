#include "Game.hpp"
#include "Board.hpp"

Game::Game() {}

Game::~Game() {}

void Game::runGameLoop() {
	Board* board = new Board();
	board->printBoard();
	delete board;
}
