
#ifndef COORDINATE_H
#define COORDINATE_H

#include <string>
#include <iostream>
/**
  * class Coordinate
  * 
  */

class Coordinate
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Coordinate();
  Coordinate (unsigned int t_x, unsigned int t_y);
  void read();
  /**
   * Empty Destructor
   */
  virtual ~Coordinate ();

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

  unsigned int x;
  unsigned int y;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of x
   * @param new_var the new value of x
   */
  void setX (unsigned int new_var)   {
      x = new_var;
  }

  /**
   * Get the value of x
   * @return the value of x
   */
  unsigned int getX ()   {
    return x;
  }

  /**
   * Set the value of y
   * @param new_var the new value of y
   */
  void setY (unsigned int new_var)   {
      y = new_var;
  }

  /**
   * Get the value of y
   * @return the value of y
   */
  unsigned int getY ()   {
    return y;
  }
private:




};

#endif // COORDINATE_H
