#include "King.h"

// Constructors/Destructors
//  

King::King (Coordinate coordinate) :Piece(0, coordinate){
}
bool King:: move ( Coordinate coordinate){}
bool King::eat(Coordinate coordinate){
    return move(coordinate);
}
King::~King () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


