#include <iostream>

class mother {
protected:
    int mX;
private:
    int mY;
public:
    int mZ;
};

class daughter : public mother {
private:
    double dY;
public:
    void dFoo() {
        mX = 10;
        mZ = 20;
        std::cout << "mX = " << mX << ", mZ = " << mZ << std::endl;
    }
};

class gD : public daughter {
private:
    double gY;
public:
    void gFoo() {
        mZ = 22;
        std::cout << "mZ = " << mZ << std::endl;
    }
};

int main() {
    daughter d1;
    d1.dFoo();  
    gD g1;
    g1.gFoo();
    g1.dFoo();
    return 0;
}
