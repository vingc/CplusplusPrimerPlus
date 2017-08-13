#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class chapter13A {
private:
    int a;
public:
    chapter13A();
    virtual void funcA();
    virtual void funcA(int a) { cout << "chapter13A::funcA(int a)" << endl; };
    virtual ~chapter13A() {}
};

class chapter13B : public chapter13A {
private:
    int b;
    int a;
public:
    chapter13B();
    //virtual void funcA();
};

chapter13A::chapter13A() {
    cout << "chapter13A::chapter13A()\n";
    a = 1;
}

void chapter13A::funcA() {
    cout << "chapter13A::funcA()" <<a<<endl;
}

chapter13B::chapter13B() : chapter13A() {
    cout << "chapter13B::chapter13B()\n";
    a = 2;
    b = 3;
}
/*
void chapter13B::funcA() {
    cout << "chapter13B::funcA()"<<a<<b<<endl;
}
*/
void main() {

    chapter13A & chA = chapter13A();
    chapter13B & chB = chapter13B();

    chapter13A & alias = chB;

    chB.funcA();
    alias.funcA();
    chA.funcA();
    chB.funcA(10);
}