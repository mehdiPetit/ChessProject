#include "Player.h"

// Constructors/Destructors
//  
Player::Player(){}
Player::Player (std::string color) {

    unsigned int ligne_1, ligne_2;
    this->color = color;
    if(color == "white")
    {
        ligne_1 = 0;
        ligne_2 = 1;
    }
    else
    {
        ligne_1 = 7;
        ligne_2 = 6;
    }

    score = 39;
    pieces.push_front(new Rook(Coordinate(0,ligne_1)));
    pieces.push_front(new Rook(Coordinate(7,ligne_1)));
    pieces.push_front(new Knight(Coordinate(1, ligne_1)));
    pieces.push_front(new Knight(Coordinate(6, ligne_1)));
    pieces.push_front(new Bishop(Coordinate(2, ligne_1)));
    pieces.push_front(new Bishop(Coordinate(5, ligne_1)));
    pieces.push_front(new Queen(Coordinate(/*3*/1, 4* (ligne_2 -  ligne_1)+ligne_1)));


    for(int i = 0; i < 8; i++)
    {
        pieces.push_front(new Pawn(Coordinate(i, ligne_2)));
    }

    //The king is always the first element of our list
    pieces.push_front(new King(Coordinate(4, ligne_1)));

}

bool Player::isPieceOwner(Piece *piece){
    bool isPieceFound = false;
    for( std::list<Piece*>::iterator it = pieces.begin(); it != pieces.end(); it++)
    {
        if( piece == *it )
            isPieceFound = true;
    }
    return isPieceFound;
}


bool Player::isPlayerChessed(Board *board){
    bool chessed = false;
    int iterator;
    int x = pieces.front()->getCoordinate().getX();
    int y = pieces.front()->getCoordinate().getY();


    //If the king is chessed by a pawn

    if(color == "white")
    {
        iterator = 1;
    }
    else
    {
        iterator = -1;
    }


    Piece *pieceTemp = board->getBoard()[y + iterator][x + iterator].getPiece();
    if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "P")
    {
        chessed = true;
    }

    pieceTemp = board->getBoard()[y + iterator][x - iterator].getPiece();
    if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "P")
    {
        chessed = true;
    }

    if( x + 2 < 8 && y + 1 < 8 )
    {
        pieceTemp = board->getBoard()[y + 1 ][x + 2].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }

    }
    if( x + 1 < 8 && y + 2 < 8)
    {
        pieceTemp = board->getBoard()[y + 2 ][x + 1].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }
    }
    if( x - 2 > 0 && y + 1 < 8)
    {
        pieceTemp = board->getBoard()[y + 1 ][x - 2].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }
    }
    if( x - 1 > 0 && y + 2 < 8)
    {
        pieceTemp = board->getBoard()[y + 2 ][x - 1].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }
    }
    if( x + 2 < 8 && y - 1 > 0)
    {
        pieceTemp = board->getBoard()[y - 1 ][x + 2].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }
    }
    if( x + 1 < 8 && y - 2 > 0)
    {
        pieceTemp = board->getBoard()[y - 2 ][x + 1].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }
    }
    if( x - 2 > 0 && y - 1 > 0)
    {
        pieceTemp = board->getBoard()[y - 1 ][x - 2].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }
    }
    if( x - 1 > 0 && y - 2 > 0)
    {
        pieceTemp = board->getBoard()[y - 2 ][x - 1].getPiece();
        if( pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && pieceTemp->toString() == "k")
        {
            chessed = true;
        }
    }

    int cpt = x;

    while (cpt < 7 && board->getBoard()[y][cpt + 1].getPiece() == NULL)
    {
        cpt++;
    }
    pieceTemp = board->getBoard()[y][cpt].getPiece();

    if( pieceTemp != NULL && cpt != 8  && (!this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "R" ||pieceTemp->toString() == "Q" ) ))
    {
        chessed = true;
    }

     cpt = x ;

    while (cpt > 1 && board->getBoard()[y][cpt - 1].getPiece() == NULL)
    {
        cpt--;
    }
    pieceTemp = board->getBoard()[y][cpt].getPiece();

    if( pieceTemp != NULL && cpt != 0  && (!this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "R" ||pieceTemp->toString() == "Q" ) ))
    {
        chessed = true;
    }

    cpt = y ;

    while (cpt < 7 && board->getBoard()[cpt +1 ][x].getPiece() == NULL)
    {
        cpt++;
    }
    pieceTemp = board->getBoard()[cpt][x].getPiece();

    if(pieceTemp != NULL &&  cpt != 8  && (!this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "R" ||pieceTemp->toString() == "Q" ) ))
    {
        chessed = true;
    }

     cpt = y ;

    while (cpt > 1 && board->getBoard()[cpt -1][x].getPiece() == NULL)
    {
        cpt--;
    }
    pieceTemp = board->getBoard()[cpt][x].getPiece();

    if( pieceTemp != NULL && cpt != 0  && (!this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "R" ||pieceTemp->toString() == "Q" ) ))
    {
        chessed = true;
    }



    /** --------------------------------------------------------------------- **/

    int cptX = x;
    int cptY = y;

    while (cptX < 7 && cptY < 7 && board->getBoard()[cptY +1 ][cptX + 1].getPiece() == NULL)
    {
        cptX++;
        cptY++;
    }

    if( (cptX != 7 && cptY != 7))
    {
        pieceTemp = board->getBoard()[cptY+1][cptX+1].getPiece();

        if(pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "B" ||pieceTemp->toString() == "Q" ) )
       {


            chessed = true;

        }
    }

    cptX = x;
    cptY = y;

    while (cptX > 1 && cptY > 1 && board->getBoard()[cptY - 1 ][cptX - 1].getPiece() == NULL )
    {
        cptX--;
        cptY--;
    }

    if( (cptX != 0 && cptY != 0) )
    {
        pieceTemp = board->getBoard()[cptY-1][cptX-1].getPiece();
         if(pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "B" ||pieceTemp->toString() == "Q" ) )
        {


             chessed = true;

         }
}
    cptX = x;
    cptY = y;

    while (cptX < 7 && cptY > 1 && board->getBoard()[cptY -1 ][ cptX + 1].getPiece() == NULL)
    {
        cptX++;
        cptY--;
    }





    if( (cptX != 7 && cptY != 0))
    {
        pieceTemp = board->getBoard()[cptY-1][cptX+1].getPiece();

        if(pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "B" ||pieceTemp->toString() == "Q" ) )
       {


            chessed = true;

        }
    }





    cptX = x;
    cptY = y;

    while (cptX > 1 && cptY < 7 && board->getBoard()[cptY  + 1 ][ cptX - 1].getPiece() == NULL)
    {
        cptX--;
        cptY++;
    }
    if( (cptX != 0 && cptY != 7))
    {
        pieceTemp = board->getBoard()[cptY+1][cptX-1].getPiece();

        if(pieceTemp != NULL && !this->isPieceOwner(pieceTemp) && (pieceTemp->toString() == "B" ||pieceTemp->toString() == "Q" ) )
       {


            chessed = true;

        }
    }

    /** --------------------------------------------------------------------- **/
    return chessed;
}

Player::~Player () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  



