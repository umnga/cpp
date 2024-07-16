#include <iostream>
#include <cmath>

class point {
protected:
    int x, y;
public:
    void set(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        std::cout << "Point (" << x << ", " << y << ")" << std::endl;
    }
};

class threeD : protected point {
protected:
    int z;
public:
    void set(int a, int b, int c) {
        point::set(a, b); // Set x and y
        z = c;
    }

    void originDist() {
        std::cout << "Distance from origin: " << std::sqrt(x * x + y * y + z * z) << std::endl;
    }

    void display() {
        std::cout << "Point (" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

class sphere : protected threeD {
protected:
    int r;
public:
    void set(int a, int b, int c, int radius) {
        threeD::set(a, b, c); // Set x, y, and z
        r = radius;
    }

    void display() {
        std::cout << "Sphere center (" << x << ", " << y << ", " << z << "), Radius: " << r << std::endl;
    }

    void volume() {
        std::cout << "Volume of sphere is: " << (4.0 / 3) * 3.14 * r * r * r << std::endl;
    }
};

int main() {
    // Test the classes
    point p;
    p.set(1, 2);
    p.display();

    threeD t;
    t.set(3, 4, 5);
    t.display();
    t.originDist();

    sphere s;
    s.set(6, 7, 8, 9);
    s.display();
    s.volume();

    return 0;
}
