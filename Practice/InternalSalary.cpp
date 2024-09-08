#include<iostream>
#include<string>
using namespace std;
class Salary{
    protected:
        string title;
        float baseSalary;
    public:
        Salary(){}
        Salary(string t, float bs):title(t), baseSalary(bs){}
        virtual double calcSalary(){
            return baseSalary;
        }
        void displaySalary(){
            cout<<"Title: "<<title<<endl;
            cout<<"Total Salary: "<<calcSalary()<<endl;
        }
};

class HourlySalary : public Salary{
    private:
        double hrsWorked;
        double hrsRate;
    public:
        HourlySalary(string t, float bs, double hw, double hr): Salary(t,bs),hrsWorked(hw), hrsRate(hr){}
        double calcSalary() override{
            return hrsWorked * hrsRate + baseSalary;
        }
};

class CommisionSalary : public Salary{
    private:
        double saleAmount;
        double commisionRate;
    public:
        CommisionSalary(string t, float bs, double sa, double cr): Salary(t,bs),saleAmount(sa),commisionRate(cr){}
        double calcSalary() override{
            return baseSalary+ saleAmount*(commisionRate/100);
        }
};

int main(){
    HourlySalary hourly("A",40000,12,20);
    CommisionSalary commision("B",50000,100000,7);
    hourly.displaySalary();
    commision.displaySalary();
    return 0;
}