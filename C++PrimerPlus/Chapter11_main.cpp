#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include "chapter11.h"

using namespace std;

int main() {
    Stonewt stn1 = Stonewt(10);
    Stonewt stn2 = Stonewt(13);

    stn1 = stn1 * 2;
    stn2 = 2 * stn2;
    stn1.show_lbs();
    stn2.show_lbs();

    return 0;
}