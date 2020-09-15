#include "Game.hpp"

int main() {
	Game* game = new Game();
	game->runGameLoop();
	delete game;
	return 0;
}
