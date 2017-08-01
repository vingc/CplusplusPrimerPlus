#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <new>

using namespace std;

double dd = 10.0;
extern int aa;
extern char s = 'z';

void fail(int, int);

namespace hell {
    int jay = 10;
}

int jay = 11;

int main() {
    int a = 10;
    int b = 11;


    cout << "a=" << a << ",&a=" << &a << endl;
    cout << "b=" << b << ",&b=" << &b << endl;

    fail(2, 5);
    return 0;
}

void fail(int x, int y) {
    int * a = new int(5); 
    int * b = new int{ 10 };

    int c, d;
    cout << "x=" << x << ",&x=" << &x << endl;
    cout << "y=" << y << ",&y=" << &y << endl;
    cout << "c=" << c << ",&c=" << &c << endl;
    cout << "d=" << d << ",&d=" << &d << endl;

    using hell::jay;
    cout << "fail:jay=" << jay << endl;
}