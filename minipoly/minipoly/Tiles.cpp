#include "Tiles.h"

Tiles::Tiles(std::string tname, double baseR, double setOR, int setID)
{
	this->tileName = tname;
	this->baseRent = baseR;
	this->setOwnedRent = setOR;
	this->setID = setID;
	startingState();
}

std::string Tiles::getTileName()
{
	return this->tileName;
}

double Tiles::getBaseRent()
{
	return this->baseRent;
}

double Tiles::getSetOwnedRent()
{
	return this->setOwnedRent;
}

bool Tiles::getOwned()
{
	return this->owned;
}

Player* Tiles::getOwner()
{
	return this->owner;
}

void Tiles::setOwner(Player* owner)
{
	this->owner = owner;
}

void Tiles::setOwned(bool o)
{
	this->owned = o;
}

void Tiles::startingState()
{
	this->owned = false;
}

