
#ifndef PIECE_H
#define PIECE_H

#include <string>
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

    virtual std::string toString() = 0;

  /**
   * Empty Constructor
   */
  Piece (unsigned int var_temp);
  Piece (unsigned int var_temp, Coordinate coordinate);
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
  Coordinate coordinate;
public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

  virtual bool move ( Coordinate t_coordinate)=0;
  virtual bool eat ( Coordinate t_coordinate)=0;

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
