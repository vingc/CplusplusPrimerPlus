#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Stock {
private:
    string name;
    int shares;

public:
    Stock( string name_, int val) {
        Stock();
        name = name_;
        shares = val;
    }

    Stock() { cout << "default constructor\n"; };

    ~Stock() { cout << "Bye," << name << endl; };
    void Show() {
        cout << "Name: " << name << ", share: " << shares << endl;
    };
};


int main() {
    {
        Stock st1 = Stock("st1", 10);
        Stock st2("st2", 11);
        Stock st4 = Stock();

        //new stock
        Stock * st3 = new Stock{ "st3", 11 };
        delete st3;

    }

    cout << "end main\n";
    return 0;
}