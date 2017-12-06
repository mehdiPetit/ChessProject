
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include<list>
#include"Piece.h"
/**
  * class Player
  * 
  */

class Player
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Player ();

  /**
   * Empty Destructor
   */
  virtual ~Player ();

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

  std::list<Piece*> pieces;
public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  


  /**
   * Set the value of pieces
   * @param new_var the new value of pieces
   */
  void setPieces (std::list<Piece*> new_var)   {
      pieces = new_var;
  }

  /**
   * Get the value of pieces
   * @return the value of pieces
   */
  std::list<Piece*> getPieces ()   {
    return pieces;
  }
protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  unsigned int score;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of score
   * @param new_var the new value of score
   */
  void setScore (unsigned int new_var)   {
      score = new_var;
  }

  /**
   * Get the value of score
   * @return the value of score
   */
  unsigned int getScore ()   {
    return score;
  }
private:


  void initAttributes () ;

};

#endif // PLAYER_H
