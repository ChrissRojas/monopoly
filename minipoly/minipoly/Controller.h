#pragma once
#include "Player.h"
#include "Board.h"

class Controller {
private:
	Player p1;
	Player p2;
	Board mBoard;
public:
	Controller(Player player1, Player player2, Board board);
	Player getCurrentPlayer();
	void updateTurn();
	int rollDice();
	void updatePos();

};