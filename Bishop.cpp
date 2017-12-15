#include "Bishop.h"

// Constructors/Destructors
//  

Bishop::Bishop(Coordinate coordinate):Piece(3, coordinate) {

}

bool Bishop::move(Coordinate coordinate){}
bool Bishop::eat(Coordinate coordinate){
   return  move(coordinate);
}

Bishop::~Bishop () { }


//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


