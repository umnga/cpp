/*Create a class called Polygon with two data members: numberOfSides, and centroid
(a Point object, you may use the Point class from previous lectures) and two member
functions: display() that displays the values of member variables, and move() that
translates the Polygon object to a new location.
Create two other classes Triangle and Rectangle inheriting from Polygon class. Add
relevant data members and member functions in these classes.*/

#include <iostream>

// Point class representing a point in 2D space
class Point {
public:
    float x;
    float y;

    Point() : x(0), y(0) {}
    Point(float x, float y) : x(x), y(y) {}

    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

// Polygon class
class Polygon {
protected:
    int numberOfSides;
    Point centroid;

public:
    Polygon(int sides, Point center) : numberOfSides(sides), centroid(center) {}

    void display() const {
        std::cout << "Number of Sides: " << numberOfSides << std::endl;
        std::cout << "Centroid: ";
        centroid.display();
    }

    void move(float dx, float dy) {
        centroid.x += dx;
        centroid.y += dy;
    }
};

// Triangle class inheriting from Polygon
class Triangle : public Polygon {
private:
    float side1, side2, side3;

public:
    Triangle(Point center, float s1, float s2, float s3)
        : Polygon(3, center), side1(s1), side2(s2), side3(s3) {}

    void display() const {
        Polygon::display();
        std::cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << std::endl;
    }
};

// Rectangle class inheriting from Polygon
class Rectangle : public Polygon {
private:
    float width, height;

public:
    Rectangle(Point center, float w, float h)
        : Polygon(4, center), width(w), height(h) {}

    void display() const {
        Polygon::display();
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

// Main function to demonstrate the usage of the classes
int main() {
    Point center(1.0, 2.0);

    Triangle t(center, 3.0, 4.0, 5.0);
    std::cout << "Triangle:\n";
    t.display();
    t.move(1.0, 1.0);
    std::cout << "After moving:\n";
    t.display();

    Rectangle r(center, 5.0, 10.0);
    std::cout << "\nRectangle:\n";
    r.display();
    r.move(-1.0, -1.0);
    std::cout << "After moving:\n";
    r.display();

    return 0;
}
