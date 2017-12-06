
#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"

#include <string>

/**
  * class Bishop
  * 
  */

class Bishop : virtual public Piece
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Bishop ();

  /**
   * Empty Destructor
   */
  virtual ~Bishop ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  
     virtual bool move (Board board, Coordinate coordinate);
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

#endif // BISHOP_H
