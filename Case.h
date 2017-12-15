
#ifndef CASE_H
#define CASE_H

#include <string>
class Piece;
/**
  * class Case
  * 
  */

class Case
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Case ();

  /**
   * Empty Destructor
   */
  virtual ~Case ();

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

  Piece *piece;
public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  


  /**
   * Set the value of piece
   * @param new_var the new value of piece
   */
  void setPiece (Piece *new_var)   {
      piece = new_var;
  }

  /**
   * Get the value of piece
   * @return the value of piece
   */
  Piece* getPiece ()   {
    return piece;
  }

  void switchPiece(Case *caseTwo);
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

#endif // CASE_H
