#include "Knight.h"

// Constructors/Destructors
//  

Knight::Knight (Coordinate coordinate) :Piece(3, coordinate){
}
bool Knight:: move ( Coordinate coordinate){}
bool Knight::eat(Coordinate coordinate){
    return move(coordinate);
}
Knight::~Knight () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


