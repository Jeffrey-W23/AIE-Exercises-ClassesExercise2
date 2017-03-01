#include <iostream>
#include "Game.h"
#include <time.h>

void main()
{
	// seed the rand function
	srand((int)time(0));

	// Create game
	Game* pGame = new Game(10);

	// Update game. Left blank.
	while (pGame->Update()){}

	// Delete game so no memory leaks
	delete pGame;
	
	// pause game at the end
	system("pause");
}