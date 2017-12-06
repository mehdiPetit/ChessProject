
#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"

#include <string>

/**
  * class Rook
  * 
  */

class Rook : virtual public Piece
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Rook ();

  /**
   * Empty Destructor
   */
  virtual ~Rook ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:
  virtual bool move (Board board, Coordinate coordinate);
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

#endif // ROOK_H
