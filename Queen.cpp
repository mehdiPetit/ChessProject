#include "Queen.h"

// Constructors/Destructors
//  

Queen::Queen (Coordinate coordinate) :Piece(9, coordinate){
}
bool Queen:: move ( Coordinate coordinate){}
bool Queen::eat(Coordinate coordinate){
    return move(coordinate);
}
Queen::~Queen () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


