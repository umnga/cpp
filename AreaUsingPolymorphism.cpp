#include<iostream>
using namespace std;
class Shape{
    public:
    double side_one;
    double side_two;

    Shape() : side_one(0), side_two(0){};
    Shape(double s1, double s2) : side_one(s1), side_two(s2) {}

    void set_data(double s1, double s2){
        side_one = s1;
        side_two = s2;
    }

    virtual void display_area() const{
        cout<<"Base class display_area() function";
    }
};

class Rectangle: public Shape{
    public:
        Rectangle(double s1, double s2) : Shape(s1, s2){}
        void display_area() const{
            cout<<"Rectangle area = "<<side_one* side_two<<endl;
        }
};

class Triangle: public Shape{
    public:
        Triangle(double s1, double s2): Shape(s1, s2) {}
        void display_area() const{
            cout<<"Triangle area = "<<0.5*side_one*side_two<<endl;
        }
};

int main(){
    double side1, side2;
    cout<<"Enter side1 and side2: ";
    cin>>side1>>side2;
    Shape* sh;
    sh = new Triangle (side1,side2);
    sh->display_area();
    return 0;
}