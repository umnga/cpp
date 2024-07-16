#include<iostream>
class b{
    public:
    void display(){
        std::cout<<"Hello from class B"<<std::endl;
    }
};

class d: public b{
    public:
    void display(){
        std::cout<<"Hello from class D"<<std::endl;
    }
};
int main(){
    d d1;
    d1.display();
    d1.b::display();
    d1.d::display();
    return 0;
}