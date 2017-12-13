#include "Game.h"

// Constructors/Destructors
//  

Game::Game () {
 player_1 = new Player("white");
 player_2 = new Player("black");
 board = new Board(player_1, player_2);
}

Game::~Game () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  



