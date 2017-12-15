#include "King.h"

// Constructors/Destructors
//  

King::King (Coordinate coordinate) :Piece(0, coordinate){
}
bool King:: move ( Coordinate coordinate, Board* board){}
bool King::eat(Coordinate coordinate, Board* board){
    return move(coordinate, board);
}
King::~King () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


