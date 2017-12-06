
#ifndef PIECE_H
#define PIECE_H

#include <string>
#include "Board.h"
#include "Coordinate.h"
/**
  * class Piece
  * 
  */

class Piece
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Piece (unsigned int var_temp);

  /**
   * Empty Destructor
   */
  virtual ~Piece ();

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

  unsigned int value;
public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  


  /**
   * Set the value of value
   * @param new_var the new value of value
   */
  void setValue (unsigned int new_var)   {
      value = new_var;
  }

  /**
   * Get the value of value
   * @return the value of value
   */
  unsigned int getValue ()   {
    return value;
  }
protected:



  /**
   * @return bool
   * @param  board
   * @param  coordinate
   */
  virtual bool move (Board board, Coordinate coordinate)=0;


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  Coordinate coordinate;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of coordinate
   * @param new_var the new value of coordinate
   */
  void setCoordinate (Coordinate new_var)   {
      coordinate = new_var;
  }

  /**
   * Get the value of coordinate
   * @return the value of coordinate
   */
  Coordinate getCoordinate ()   {
    return coordinate;
  }
private:



};

#endif // PIECE_H
