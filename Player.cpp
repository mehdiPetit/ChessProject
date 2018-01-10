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
    pieces.push_front(new Queen(Coordinate(3, ligne_1)));


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



