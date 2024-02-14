#include "Rectangle.h"

Rectangle::Rectangle(double l, double w) 
{
  length = l;
  width = w;
}

double Rectangle::getLength() 
{
  return length;
}

double Rectangle::getWidth() 
{
  return width;
}

double Rectangle::getArea() 
{
  return length * width;
}