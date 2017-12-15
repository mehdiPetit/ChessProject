#include "Board.h"
#include <iostream>
#include "Player.h"

// Constructors/Destructors
//  

Board::Board () {

    board = new Case*[8];
    for(int i = 0; i < 8; i++)
    {
        board[i] = new Case[8];

    }




}

void Board::refresh(Player *player_1, Player *player_2){

    for( std::list<Piece*>::iterator it = player_1->getPieces().begin(); it != player_1->getPieces().end(); it++)
    {
        //std::cout << (*it)->toString() << std::endl;
        //board[(*it)->getCoordinate().getX()][(*it)->getCoordinate().getY()] = Case();
        board[(*it)->getCoordinate().getY()][(*it)->getCoordinate().getX()].setPiece(*it);
    }


    for( std::list<Piece*>::iterator it2 = player_2->getPieces().begin(); it2 != player_2->getPieces().end(); it2++)
    {
        //std::cout << (*it2)->toString() << std::endl;
        //board[(*it2)->getCoordinate().getX()][(*it2)->getCoordinate().getY()] = Case();
        board[(*it2)->getCoordinate().getY()][(*it2)->getCoordinate().getX()].setPiece(*it2);
    }

}

void Board::print(){
    std::cout << "   0   1   2   3   4   5   6   7" << std::endl << std::endl;
    for(int i = 0; i < 8; i++)
    {
        std::cout << i << "  ";
        for(int j = 0; j < 8; j++)
        {
            if(board[i][j].getPiece() == NULL)
            {
                std::cout << "0 | ";
            }
            else std::cout << board[i][j].getPiece()->toString() << " | ";
        }
        std::cout << std::endl << "   -------------------------------" << std::endl;
    }
}

Board::~Board () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


