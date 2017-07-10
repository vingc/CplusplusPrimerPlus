#include <iostream>

using namespace std;

int main() {

    int usa; //mpg
    cout << "Enter the mpg of USA:";
    cin >> usa;
    //100km = 62.14mile, 1g = 3.875L
    float europe = 3.875 / usa * 62.14; //Lp100km
    cout << usa << "mpg is " << europe << "L per 100km" << endl;

    return 0;
}