#pragma once
#include <string>
#include "Player.h"
class Tiles{
private:
	std::string tileName;
	double baseRent, setOwnedRent;
	bool owned;
	Player* owner;
	int setID;
public:
	Tiles(std::string, double baseR, double setOR,int setID);
	std::string getTileName();
	double getBaseRent();
	double getSetOwnedRent();
	bool getOwned();
	Player* getOwner();
	void setOwner(Player* owner);
	void setOwned(bool o);
	void startingState();
};