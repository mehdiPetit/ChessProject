
#ifndef BOARD_H
#define BOARD_H

#include <string>
#include "Case.h"


/**
  * class Board
  * 
  */
class Player;
class Board
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Board ();
  void refresh(Player *player_1, Player *player_2);
  void print(Player *player_1, Player *player_2);

  /**
   * Empty Destructor
   */
  virtual ~Board ();

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

  Case** board;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of board
   * @param new_var the new value of board
   */

  /**
   * Get the value of board
   * @return the value of board
   */
  Case** getBoard (){
    return board;
  }


private:



};

#endif // BOARD_H
