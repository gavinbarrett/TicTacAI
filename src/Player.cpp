#include "Player.hpp"

Player::Player(int id) : id(id) {}

Player::~Player() {}

int Player::getId() {
	return this->id;
}
