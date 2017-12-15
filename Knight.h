
#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"

#include <string>

/**
  * class Knight
  *
  */

class Knight : virtual public Piece
{
public:

    // Constructors/Destructors
    //
    virtual std::string toString(){
        return "k" ;
    }

    /**
   * Empty Constructor
   */
    Knight (Coordinate coordinate);

    /**
   * Empty Destructor
   */
    virtual ~Knight ();

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
    virtual bool eat (Coordinate coordinate);

    virtual bool move ( Coordinate coordinate);
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

#endif // KNIGHT_H
