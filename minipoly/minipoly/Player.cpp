#include "Player.h"

Player::Player() {
	startState();
}

double Player::getBalance()
{
	return this->plBalance;
}

bool Player::getTurn()
{
	return this->turn;
}

int Player::getPos()
{
	return this->position;
}

std::vector<int> Player::getSetsOwned()
{
	return this->setsOwned;
}

std::vector<Tiles> Player::getProperties()
{
	return this->tiles;
}

void Player::addSet(int setO)
{
	this->setsOwned.push_back(setO);
}

void Player::addProperty(Tiles prop)
{
	this->tiles.push_back(prop);
}

void Player::setTurn(bool t)
{
	this->turn = t;
}

void Player::setPos(int newPos)
{
	this->position = newPos;
}

void Player::setBalance(double newBalance)
{
	this->plBalance = newBalance;
}

void Player::startState()
{
	this->plBalance = 2000.0;
	this->position = 0;
}

