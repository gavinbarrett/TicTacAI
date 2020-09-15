#include "Game.hpp"
#include "Board.hpp"

Game::Game() {
	this->board = new Board();
}

Game::~Game() {
	delete this->board;
}

void Game::makeMove(std::pair<int, int> move) {
	
}

bool Game::canMakeMove(std::pair<int, int> move) {
	return this->board->board[move.first][move.second] == '*';
}

int Game::getPlayer() {
	// alternate current player
	this->player ? this->player = 0 : this-> player = 1;
	return this->player;
}

void Game::playerMove(int player) {
	int x = 0;
	std::cout << "Player " << player << ", choose a move.\n";
	std::cin >> x;
	std::cout << x;
}

void Game::runGameLoop() {

	// FIXME: create players
	while (true) {
		this->board->printBoard();
		// ask player for move
		this->playerMove(this->getPlayer());
		std::pair<int, int> move = {1, 1};
		if (this->canMakeMove(move)) {
			std::cout << "Move made\n";
		}
	}
}
