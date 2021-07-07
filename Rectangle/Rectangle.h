#ifndef RECTANGLE_H
#define RECTANGLE_H

//Rectangle Class Declaration
class Rectangle
{
private:                 //make the attributes private
   double length;
   double width;

public:                 //function prototypes
   Rectangle(double = 1.0, double = 1.0); //constructor that takes two parameters
   Rectangle& setLength(double);
   Rectangle& setWidth(double);
   double getLength() const;
   double getWidth() const;
   double getArea() const;
};

#endif