#pragma once
#include <vector>
#include "Tiles.h"
class Player {
private:
	double plBalance;
	bool turn;
	int position;
	std::vector<int> setsOwned;
	std::vector<Tiles> tiles;
public:
	Player();
	double getBalance();
	bool getTurn();
	int getPos();
	std::vector<int> getSetsOwned();
	std::vector<Tiles> getProperties();
	void addSet(int setO);
	void addProperty(Tiles prop);
	void setTurn(bool t);
	void setPos(int newPos);
	void setBalance(double newBalance);
	void startState();
};