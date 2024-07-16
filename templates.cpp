#include<iostream>
template<class T>
T getMax(T a, T b){
    T result;
    result = (a>b)?a:b;
    return result;
}

int main(){
    int i=10,j=15;
    long a=10,b=12;
    std::cout<<getMax<int>(i,j)<<std::endl;
    std::cout<<getMax<long>(a,b)<<std::endl;
    return 0;
}