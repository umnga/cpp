#include<iostream>
using namespace std;
class Vehicle{
    public:
        string name;
        int price;
        float power;

        Vehicle(string n, int pr, float pw): name(n), price(pr), power(pw){}
        virtual void display(){
            cout<<"Company Name = "<<name<<endl;
            cout<<"Price = "<<price<<endl;
        }
};

class EV : public Vehicle{
    public:
        int fullChargeCap;
        EV(string n, int pr, float pw, int fc) : Vehicle(n,pr,pw),fullChargeCap(fc){}
        void display() override{
            Vehicle::display();
            cout<<"Full Charge Capacity = "<<fullChargeCap<<endl;
        }
};

class Gas : public Vehicle{
    public:
        int fuelCapacity;
        Gas (string n, int pr, float pw, int fC): Vehicle(n,pr,pw), fuelCapacity(fC){}
        void display() override{
            Vehicle::display();
            cout<<"Fuel Capacity = "<<fuelCapacity<<endl;
        }
};

int main(){
    Vehicle* vehicles[2];
    vehicles[0]= new EV("BYD",4000000,300,100);
    vehicles[1]= new Gas("GT3 RS", 10000000, 50.0, 80);

    for(int i=0;i<2;i++){
        vehicles[i]->display();
        delete vehicles[i]; //memory leak nahos vaenra. not compulsary
    }
    return 0;
}
