#include <cstdlib>
#include <iostream>
#include "Board.hpp"

#ifndef GAME_HPP_
#define GAME_HPP_
class Game {
  public:
	Game();
	~Game();
	void makeMove(std::pair<int, int> move);
	bool canMakeMove(std::pair<int, int> move);
	int getPlayer();
	void playerMove(int player);
	void runGameLoop();
	Board* board;
	int player = 0;
};
#endif // GAME_HPP_
