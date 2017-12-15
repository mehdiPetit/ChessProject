#include "Pawn.h"
//  

Pawn::Pawn (Coordinate coordinate):Piece(1, coordinate), isFirstMoove(true) {
}
bool Pawn:: move (Coordinate t_coordinate, Board* board){
    bool isMoveAllowed = false;
    if(
            (
                abs(coordinate.getX() - t_coordinate.getX()) == 0 &&
                ((abs(coordinate.getY() - t_coordinate.getY()) == 1) ||(abs(coordinate.getY() - t_coordinate.getY()) == 2 && isFirstMoove))
             )
    )
    {
        this->setCoordinate(t_coordinate);
        isMoveAllowed = true;
    }
    isFirstMoove = false;
    return isMoveAllowed;
}

bool Pawn::eat(Coordinate t_coordinate, Board* board){



    bool isMoveAllowed = false;
    bool isXMoveAllowed = abs(coordinate.getX() - t_coordinate.getX()) == 1;
    bool isYMoveAllowed = abs(coordinate.getY() - t_coordinate.getY()) == 1;

    if(isXMoveAllowed && isYMoveAllowed)
    {
        this->setCoordinate(t_coordinate);
        isMoveAllowed = true;

    }
    isFirstMoove = false;
    return isMoveAllowed;
}
Pawn::~Pawn () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


