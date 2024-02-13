#include <iostream>
#include "Rectangle.h"

int main() {
  Rectangle rect(5.0, 3.0); // Create an instance of Rectangle

  double length = rect.getLength();
  double width = rect.getWidth();
  double area = rect.getArea();

  std::cout << "Rectangle length: " << length << std::endl;
  std::cout << "Rectangle width: " << width << std::endl;
  std::cout << "Rectangle area: " << area << std::endl;

  return 0;
}