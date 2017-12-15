#include "Queen.h"

// Constructors/Destructors
//  

Queen::Queen (Coordinate coordinate) :Piece(9, coordinate){
}
bool Queen:: move ( Coordinate coordinate, Board* board){}
bool Queen::eat(Coordinate coordinate, Board* board){
    return move(coordinate, board);
}
Queen::~Queen () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


