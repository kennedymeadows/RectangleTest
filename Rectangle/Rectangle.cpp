/*File rectangle.cpp -- Function Implementation File*/
//Contains function definitions for Rectangle class functions

#include "Rectangle.h"
#include <iostream>
using namespace std;


/*RECTANGLE MEMBER FUNCTION DEFINITONS*/



Rectangle::Rectangle(double len, double w)
{
   setLength(len);
   setWidth(w);
}


Rectangle& Rectangle::setLength(double len)
{
   if (len >= 0)  //if length is positive data is valid
   {
      length = len;  //set the member variable
   }
   else  //else data is invalid
      length = 0;
   return *this;
}

/*******************************************************************************
                        Rectangle::setWidth
If the argument passed to the setWidth function is zero or greater it is copied
into the member variable length and true is returned.  If the argument is negative,
the value of width remains unchanged and false is returned
*******************************************************************************/
Rectangle& Rectangle::setWidth(double w)
{

   if (w >= 0)  //if length is positive data is valid
   {
      width = w;  //set the member variable
   }
   else  //else data is invalid
      width = 0;
   return *this;
}

/*******************************************************************************
                        Rectangle::getLength
This function returns the value that is in the private member length
*******************************************************************************/
double Rectangle::getLength()const
{
   return length;
}

/*******************************************************************************
                        Rectangle::getWidth
This function returns the value that is in the private member width
*******************************************************************************/
double Rectangle::getWidth()const
{
   return width;
}

/*******************************************************************************
                        Rectangle::getArea
This function calculates and returns the area of the rectangle
*******************************************************************************/
double Rectangle::getArea() const
{
   return length * width;
}
