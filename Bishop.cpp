#include "Bishop.h"

// Constructors/Destructors
//  

Bishop::Bishop(Coordinate coordinate):Piece(3, coordinate) {

}

bool Bishop::move(Coordinate coordinate, Board* board){}
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


