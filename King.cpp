#include "King.h"

// Constructors/Destructors
//  

King::King (Coordinate coordinate) :Piece(0, coordinate){
}
bool King:: move ( Coordinate t_coordinate, Board* board){
    bool isMoveAllowed = false;
    if(abs(coordinate.getX() - t_coordinate.getX()) <= 1 && (abs(coordinate.getY() - t_coordinate.getY()) <= 1))
    {
        this->setCoordinate(t_coordinate);
        isMoveAllowed = true;
    }
    return isMoveAllowed;
}
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


