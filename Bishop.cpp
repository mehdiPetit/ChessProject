#include "Bishop.h"

// Constructors/Destructors
//  

Bishop::Bishop(Coordinate coordinate):Piece(3, coordinate) {

}

bool Bishop::move(Coordinate t_coordinate, Board* board){

    bool isMoveAllowed = false;

    if(abs(t_coordinate.getX() - coordinate.getX())  ==   abs(t_coordinate.getY() - coordinate.getY()))
    {
        int counterX = 0;
        int counterY = 0;
        isMoveAllowed = true;
        int incrementationX;
        int incrementationY;
        if(coordinate.getX() < t_coordinate.getX()  && coordinate.getY() < t_coordinate.getY()  )
        {
            incrementationX = 1;
            incrementationY = 1;
        }
        else if(coordinate.getX() < t_coordinate.getX()  && coordinate.getY() > t_coordinate.getY()  )
        {
            incrementationX = 1;
            incrementationY = -1;

        }
        else if(coordinate.getX() > t_coordinate.getX()  && coordinate.getY() < t_coordinate.getY()  )
        {
            incrementationX = -1;
            incrementationY = 1;

        }
        else{
            incrementationX = -1;
            incrementationY = -1;

        }
        counterX = coordinate.getX() + incrementationX;
        counterY = coordinate.getY() + incrementationY;

        for(int i = 0; i < abs(coordinate.getX() - t_coordinate.getX())-1; i++)
        {
            if(board->getBoard()[counterY][counterX].getPiece() != NULL)
            {
                isMoveAllowed = false;
            }
            counterX += incrementationX;
            counterY += incrementationY;
        }


        if(isMoveAllowed)
        {
            this->setCoordinate(t_coordinate);
        }
    }
    return isMoveAllowed;

}
bool Bishop::eat(Coordinate coordinate, Board* board){
    return  move(coordinate,  board);
}

Bishop::~Bishop () { }


//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


