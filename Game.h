
#ifndef GAME_H
#define GAME_H

#include <string>
#include "Board.h"
/**
  * class Game
  * 
  */

class Game
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Game ();

  /**
   * Empty Destructor
   */
  virtual ~Game ();

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

Board *board;
public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  


  /**
   * Set the value of board
   * @param new_var the new value of board
   */
  void setBoard (Board *new_var)   {
      board = new_var;
  }

  /**
   * Get the value of board
   * @return the value of board
   */
  Board *getBoard ()   {
    return board;
  }
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


  void initAttributes () ;

};

#endif // GAME_H
