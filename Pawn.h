
#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"

#include <string>

/**
  * class Pawn
  * 
  */

class Pawn : virtual public Piece
{
public:

  // Constructors/Destructors
  //  

    virtual std::string toString(){
        return "Pawn :"+ std::to_string(coordinate.getX()) + " - " + std::to_string(coordinate.getY()) ;
    }
  /**
   * Empty Constructor
   */
  Pawn (Coordinate coordinate);

  /**
   * Empty Destructor
   */
  virtual ~Pawn ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:
   virtual bool move ( Coordinate coordinate);
  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // PAWN_H
