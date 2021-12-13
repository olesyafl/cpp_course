#include <classes.h>

std::string Figure::getName()
{
    return _name;
}


std::string Figure::getType()
{
    switch (_type)
    {
    case SQUARE    : return "Square";
    case RECTANGLE : return "Rectangle";
    case TRIANGLE  : return "Triangle";
    case CIRCLE    : return "Circle";
    case CUBE      : return "Cube";
    case BALL      : return "Ball";
    default        : return "Unknown type";
    }
}


void Figure::print()
{
    std::cout << "Name: " + getName() + "\nType: " + getType() << std::endl;
}

/////////////////////////////////////////////////////////////////////////////
/** Квадрат **/


double Square::calcArea()
{
    return _side * _side;
}


double Square::calcPerimeter()
{
    return 4.0 * _side;
}


void Square::print()
{
    Figure::print();
    std::cout << "The perimeter and area of this square:\nP = " << calcPerimeter() << "\nS = " << calcArea() << "\n\n";
}


/** Прямоугольник **/


double Rectangle::calcArea()
{
    return _lenght * _width;
}


double Rectangle::calcPerimeter()
{
    return 2.0 * (_lenght + _width);
}


void Rectangle::print()
{
    Figure::print();
    std::cout << "The perimeter and area of this rectangle:\nP = " << calcPerimeter() << "\nS = " << calcArea() << "\n\n";
}


/** Треугольник **/


double Triangle::calcArea()
{
    double p = 0.5 * calcPerimeter();
    return sqrt(p * (p - _side_a) * (p - _side_b) * (p - _side_c));
}


double Triangle::calcPerimeter()
{
    return _side_a + _side_b + _side_c;
}

void Triangle::print()
{
    Figure::print();
    std::cout << "The perimeter and area of this triangle:\nP = " << calcPerimeter() << "\nS = " << calcArea() << "\n\n";
}


/** Круг **/


double Circle::calcArea()
{
    return M_PI * _radius * _radius;
}


double Circle::calcPerimeter()
{
    return 2.0 * M_PI * _radius;
}


void Circle::print()
{
    Figure::print();
    std::cout << "The perimeter and area of this circle:\nP = " << calcPerimeter() << "\nS = " << calcArea() << "\n\n";
}


/** Куб **/


double Cube::calcArea()
{
    return 6.0 * _lenght * _lenght;
}


double Cube::calcPerimeter()
{
    return 12.0 * _lenght;
}


double Cube::calcVolume()
{
    return pow(_lenght, 3);
}

void Cube::print()
{
    Figure::print();
    std::cout << "The perimeter, area and volume of this cube:\nP = " << calcPerimeter() <<
                 "\nS = " << calcArea() << "\nV = " << calcVolume() << "\n\n";
}


/** Шар **/


double Ball::calcArea()
{
    return 4.0 * M_PI * _radius * _radius;
}


double Ball::calcVolume()
{
    return calcArea() * _radius / 3.0;
}

void Ball::print()
{
    Figure::print();
    std::cout << "The area and volume of this ball:\nS = " << calcArea() << "\nV = " << calcVolume() << "\n\n";
}
