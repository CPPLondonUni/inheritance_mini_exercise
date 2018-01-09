#include "example.hpp"

#include <memory>
#include <vector>
#include <iostream>

/// Requirement: print the area of the given shape
void print_area(const Shape& shape)
{
    std::cout << shape.get_area() << '\n';
}

/// Requirement:
///   -- create a vector containing two Circles and two Rectangles,
///   -- for each Shape in the vector, call the print_area() function
///
/// Note: you will need to use smart pointers do make this work correctly
int main()
{
    std::vector<std::unique_ptr<Shape>> shapes;

    shapes.push_back(std::make_unique<Circle>(1));
    shapes.push_back(std::make_unique<Circle>(2));
    shapes.push_back(std::make_unique<Rectangle>(1, 2));
    shapes.push_back(std::make_unique<Rectangle>(3, 4));

    for (auto& s : shapes) {
        print_area(*s);
     }
}
