#include "Game.h"

// Constructors/Destructors
//  

Game::Game () {
    player_1.push_front(new Player("white"));
    player_2.push_front(new Player("black"));
    board = new Board();

}

bool Game::play(){

    char undo;
    bool back_last_steep = false;
    int turn = 0;
    bool endOfGame = false;
    Coordinate initialCoordinate, finalCoordinate;
    Player *activePlayer;
    Player *passivePlayer;
    Case * caseDepart;
    Case * caseFinal;
    do{
        board->refresh(player_1.front(), player_2.front());
        board->print(player_1.front(), player_2.front());
        if(turn%2 == 0)
        {
            std::cout << "Player 1 : " << std::endl;
            activePlayer = player_1.front();
            passivePlayer = player_2.front();

        }
        else {
            std::cout << "Player 2 : " << std::endl;
            activePlayer = player_2.front();
            passivePlayer = player_1.front();

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
                isMoveAllowed = caseDepart->getPiece()->eat(finalCoordinate, board);
                if(isMoveAllowed)
                {
                    passivePlayer->getPieces().remove(board->getBoard()[finalCoordinate.getY()][finalCoordinate.getX()].getPiece());
                    passivePlayer->setScore(passivePlayer->getScore() - board->getBoard()[finalCoordinate.getY()][finalCoordinate.getX()].getPiece()->getValue());
                }
            }
            else
            {
                isMoveAllowed = caseDepart->getPiece()->move(finalCoordinate, board);
            }
            if(!isMoveAllowed)
            {
                std::cerr << "This move is not allowed !!!!" << std::endl;

            }
        }while(!isMoveAllowed);

        caseDepart->setPiece(NULL);

        board->refresh(player_1.front(), player_2.front());
        board->print(player_1.front(), player_2.front());

        if(passivePlayer->isPlayerChessed(board)){
            std::cout<<"CHESS !!!!!!";
        }
        if(turn%2 == 0)
        {
            player_1.push_front(activePlayer);

        }
        else {
            player_2.push_front(activePlayer);
        }
        do{
            std::cout<<"Undo the last move ? (y/n)";
            std::cin >> undo;
            if(undo == 'y')
            {
                if(turn%2 == 0)
                {
                    player_1.remove(player_1.front());

                }
                else {
                    player_2.remove(player_2.front());

                }
                board->refresh(player_1.front(), player_2.front());
                board->print(player_1.front(), player_2.front());
            }
        }while(undo == 'y');

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



