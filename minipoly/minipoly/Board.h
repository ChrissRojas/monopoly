#pragma once
#include "Tiles.h"
class Board {
private:
	Tiles tileBoard[40];
	int setIDList[8] = {1,2,3,4,5,6,7,8};
public:
	Board();
	int* getSetIDList();
	Tiles* getTileBoard();
};