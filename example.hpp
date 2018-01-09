
#ifndef EXAMPLE_HPP_INCLUDED
#define EXAMPLE_HPP_INCLUDED

#include <cmath>

class Shape {
public:
    virtual float get_area() const = 0;

    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    Circle() = default;

    explicit Circle(float radius)
        : radius_(radius)
     {}

    virtual float get_area() const override
    {
        return M_PI * radius_ * radius_;
    }

private:
    float radius_ = 0.0f;
};

class Rectangle : public Shape {
public:
    Rectangle() = default;

    Rectangle(float width, float height)
         : width_{width}, height_{height}
    {}

    virtual float get_area() const override
    {
        return width_ * height_;
    }

private:
    float width_ = 0.0f;
    float height_ = 0.0f;
};


#endif
