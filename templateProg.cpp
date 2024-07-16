#include<iostream>
tamplate<class T>
class myPair{
    T a,b;
    public:
        myPair( T first, T second){
            a= first;
            b= second;
        }
        T getmax();      
};
template <class T>
T myPair<T>::getmax(){
    T test;
    test=a>b? a:b;
    return test;
}
int main(){
    myPair<int> myObj(100,75);
    cout<<myObj.getmax();
    return 0;
}