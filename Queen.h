
#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"

#include <string>

/**
  * class Queen
  * 
  */

class Queen : virtual public Piece
{
public:

  // Constructors/Destructors
  //  

    virtual std::string toString(){
        return "Q";
    }
  /**
   * Empty Constructor
   */
  Queen (Coordinate coordinate);

  /**
   * Empty Destructor
   */
  virtual ~Queen ();

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
  virtual bool move (Coordinate coordinate, Board* board);
  virtual bool eat (Coordinate coordinate, Board* board);

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

#endif // QUEEN_H
