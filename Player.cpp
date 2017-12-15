#include "Player.h"

// Constructors/Destructors
//  
Player::Player(){}
Player::Player (std::string color) {

    unsigned int ligne_1, ligne_2;

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
        pieces.push_front(new Rook(Coordinate(0,ligne_1 + (ligne_2-ligne_1) * 3)));
        pieces.push_front(new Rook(Coordinate(7,ligne_1)));
        pieces.push_front(new Knight(Coordinate(1, ligne_1)));
        pieces.push_front(new Knight(Coordinate(6, ligne_1)));
        pieces.push_front(new Bishop(Coordinate(2, ligne_1)));
        pieces.push_front(new Bishop(Coordinate(5, ligne_1)));
        pieces.push_front(new Queen(Coordinate(3, ligne_1+ (ligne_2-ligne_1) * 3)));
        pieces.push_front(new King(Coordinate(4, ligne_1)));

        for(int i = 0; i < 8; i++)
        {
            pieces.push_front(new Pawn(Coordinate(i, ligne_2)));
        }
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

Player::~Player () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  



