#include "Rook.h"

// Constructors/Destructors
//  

Rook::Rook (Coordinate coordinate) :Piece(5, coordinate){
}
bool Rook::eat(Coordinate coordinate, Board* board){
    return move(coordinate, board);
}
bool Rook:: move ( Coordinate t_coordinate , Board* board){
    bool isMoveAllowed = true;

    if( (coordinate.getX() == t_coordinate.getX()  &&   coordinate.getY() != t_coordinate.getY())
            ||(coordinate.getX() != t_coordinate.getX()  &&   coordinate.getY() == t_coordinate.getY()))
    {

        if (coordinate.getX() != t_coordinate.getX()  &&   coordinate.getY() == t_coordinate.getY())
        {

            int incrementation;
            if(coordinate.getX() < t_coordinate.getX())
            {
                incrementation = 1;
            }
            else incrementation = -1;
             int counter = coordinate.getX() + incrementation;
            while( counter != t_coordinate.getX() && isMoveAllowed)
            {
                if(board->getBoard()[coordinate.getY()][counter].getPiece() != NULL)
                {

                    isMoveAllowed = false;
                }
                counter += incrementation;
            }
             std::cout<<std::endl;

        }

        else
        {

            int incrementation;
            if(coordinate.getY() < t_coordinate.getY())
            {
                incrementation = 1;
            }
            else incrementation = -1;
             int counter = coordinate.getY() + incrementation;
            while( counter != t_coordinate.getY() && isMoveAllowed)
            {
                if(board->getBoard()[counter][coordinate.getX()].getPiece() != NULL)
                {

                    isMoveAllowed = false;
                }
                counter += incrementation;
            }

        }
        if(isMoveAllowed)
        {
            this->setCoordinate(t_coordinate);
        }
    }
    return isMoveAllowed;
}

Rook::~Rook () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


