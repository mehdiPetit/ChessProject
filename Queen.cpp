#include "Queen.h"

// Constructors/Destructors
//  

Queen::Queen (Coordinate coordinate) :Piece(9, coordinate){
}
bool Queen:: move ( Coordinate t_coordinate, Board* board){
    bool isMoveAllowed = false;

    if( ((coordinate.getX() == t_coordinate.getX()  &&   coordinate.getY() != t_coordinate.getY())
            ||(coordinate.getX() != t_coordinate.getX()  &&   coordinate.getY() == t_coordinate.getY()))
            || (abs(t_coordinate.getX() - coordinate.getX())  ==   abs(t_coordinate.getY() - coordinate.getY())))
    {
        isMoveAllowed = true;

        if(abs(t_coordinate.getX() - coordinate.getX())  ==   abs(t_coordinate.getY() - coordinate.getY()))
        {
                int counterX;
                int counterY;
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
                        std::cout << counterY <<"...." <<counterX<<std::endl;
                        //std::cout << "Piece :"   << board->getBoard()[counterY][counterX].getPiece()->toString() <<std::endl;
                        isMoveAllowed = false;
                    }
                    counterX += incrementationX;
                    counterY += incrementationY;
                }

        }

        else if (coordinate.getX() != t_coordinate.getX()  &&   coordinate.getY() == t_coordinate.getY())
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


