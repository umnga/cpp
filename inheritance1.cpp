#include<iostream>
#include<cmath>
class point{
    protected: 
        int x,y;
    public:
        void set(int a, int b){
            x=a;
            y=b;
        }
        void display(){
            std::cout<<"x = "<<x<<" y = "<<y<<std::endl;
        }
};
class threeD: protected point{
    protected:
        int z;
    public:
         void set(int a, int b, int c) {
            point::set(a, b);
            z = c;
        }
        void originDist(){
            std::cout<<"Distance from origin: "<<sqrt(x*x+y*y+z*z)<<std::endl;
        }
        void display(){
            std::cout << "Point (" << x << ", " << y << ", " << z << ")" << std::endl;
        }
};
class sphere: protected threeD{
    protected:
        int r;
    public:
    void set(int a, int b, int c, int radius) {
        threeD::set(a, b, c);
        r = radius;
    }
    void volume() {
        std::cout << "Volume of sphere is: " << (4.0 / 3) * 3.14 * r * r * r << std::endl;
    }
};
int main(){
    point p;
    p.set(1, 2);
    p.display();

    threeD t;
    t.set(3, 4, 5);
    t.display();
    t.originDist();

    sphere s;
    s.set(1,2,3,4);
    s.volume();

    return 0;
}    
