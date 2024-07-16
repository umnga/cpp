#include<iostream>
using namespace std;
class car{
    public:
        int mfd;
        int pr;
        void setter(){
            cout<<"mfd?";
            cin>>mfd;
            cout<<"pr?";
            cin>>pr;
        }
        void getter();
};
void car::getter(){
    cout<<"mfd="<<mfd<<endl;
    cout<<"pr="<<pr<<endl;
}
int main(){
    car c1;
    c1.setter();
    c1.getter();
    return 0;
}