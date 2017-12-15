#include "Rook.h"

// Constructors/Destructors
//  

Rook::Rook (Coordinate coordinate) :Piece(5, coordinate){
}
bool Rook::eat(Coordinate coordinate){
    return move(coordinate);
}
bool Rook:: move ( Coordinate coordinate){}

Rook::~Rook () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


