#include "Knight.h"

// Constructors/Destructors
//  

Knight::Knight (Coordinate coordinate) :Piece(3, coordinate){
}
bool Knight:: move ( Coordinate t_coordinate, Board* board){
    bool isMoveAllowed = false;
    if( (abs(coordinate.getX() - t_coordinate.getX()) == 1 &&   abs(coordinate.getY() - t_coordinate.getY()) == 2)
            ||(abs(coordinate.getX() - t_coordinate.getX()) == 2 &&   abs(coordinate.getY() - t_coordinate.getY()) == 1))
    {
        this->setCoordinate(t_coordinate);
        isMoveAllowed = true;
    }
    return isMoveAllowed;

}
bool Knight::eat(Coordinate coordinate, Board* board){
    return move(coordinate,board);
}
Knight::~Knight () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


