#include<iostream>
using namespace std;
class j{
    int x;
    public:
        j(){ }
        j(int a){x=a;}
        void show(){
            cout<<x<<endl;
        }
        friend void operator-(j &d);
 };       
        void operator -(j &d){
            d.x = ++d.x;
        }

int main(){
    j a(10);
    a.show();
    -a;
    a.show();
    return 0;
}