#include "Case.h"

// Constructors/Destructors
//  

Case::Case () {
    piece =NULL;
}

void Case::switchPiece(Case *caseTwo){
    Piece *pieceTemp = this->getPiece();
    this->setPiece(caseTwo->getPiece());
    caseTwo->setPiece(pieceTemp);
}


Case::~Case () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Case::initAttributes () {
  piece = NULL;
}

