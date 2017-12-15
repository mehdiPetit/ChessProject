#include "Game.h"

// Constructors/Destructors
//  

Game::Game () {
    player_1 = new Player("white");
    player_2 = new Player("black");
    board = new Board();
}

bool Game::play(){

    int turn = 0;
    bool endOfGame = false;
    Coordinate initialCoordinate, finalCoordinate;
    Player *activePlayer;
    Player *passivePlayer;
    Case * caseDepart;
    Case * caseFinal;
    do{
        board->refresh(player_1, player_2);
        board->print();
        if(turn%2 == 0)
        {
            std::cout << "Player 1 : " << std::endl;
            activePlayer = player_1;
            passivePlayer = player_2;

        }
        else {
            std::cout << "Player 2 : " << std::endl;
            activePlayer = player_2;
            passivePlayer = player_1;

        }


        /*Faire une fonction qui verifie que board->getBoard()[initialCoordinate.getY()][initialCoordinate.getX()] est
        bien une pliece de activePlayer*/



        bool isPlayerOwner;
        bool isMoveAllowed;
        do{
            do{
                std::cout << "Coordinate of the piece to moove :" << std::endl;
                initialCoordinate.read();
                caseDepart = &board->getBoard()[initialCoordinate.getY()][initialCoordinate.getX()];
                isPlayerOwner = activePlayer->isPieceOwner(caseDepart->getPiece());
                if(!isPlayerOwner)
                {
                    std::cerr << "This case doesn't belong to you !!!!" << std::endl;
                }
            }while(!isPlayerOwner);

            do{
                std::cout << "Coordinate where the piece has to go :" << std::endl;
                finalCoordinate.read();
                caseFinal = &board->getBoard()[finalCoordinate.getY()][finalCoordinate.getX()];
                isPlayerOwner = activePlayer->isPieceOwner(caseFinal->getPiece());
                if(isPlayerOwner)
                {
                    std::cerr << "This case is already used by one of your piece !!!!" << std::endl;
                }
            }while(isPlayerOwner);
            if(board->getBoard()[finalCoordinate.getY()][finalCoordinate.getX()].getPiece() != NULL)
            {
                isMoveAllowed = caseDepart->getPiece()->eat(finalCoordinate);
                std::cout << "Bool: " << isMoveAllowed;
            }
            else
            {
                isMoveAllowed = caseDepart->getPiece()->move(finalCoordinate);
            }
            if(!isMoveAllowed)
            {
                std::cerr << "This move is not allowed !!!!" << std::endl;
            }
        }while(!isMoveAllowed);

        caseDepart->setPiece(NULL);

        turn++;
    }while(!endOfGame);
    return endOfGame;
}

Game::~Game () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  



