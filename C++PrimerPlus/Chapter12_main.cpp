#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

#include "chapter12.h"

using namespace std;

int main() {
    Cow cw1;
    Cow cw2("Sophie", "love", 44);
    cout << "1\n";
    Cow cw3 = cw2;

    cout << "2\n";
    cw1.ShowCow();
    cw2.ShowCow();
    cw3.ShowCow();

    cw1 = { "Lulu", "sleep", 34 };
    cout << "3\n";
    cw1.ShowCow();

    return 0;
}