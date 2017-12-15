#include "Coordinate.h"

// Constructors/Destructors
//  

Coordinate::Coordinate (unsigned int t_x, unsigned int t_y):x(t_x),y(t_y) {

}


Coordinate::Coordinate (){

}

//Faire les exceptions
void Coordinate::read(){

    std::cout << "x y: ";
    std::cin >> x >> y;

}
Coordinate::~Coordinate () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

