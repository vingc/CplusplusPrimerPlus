#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include "chapter11.h"

using namespace std;

Stonewt::Stonewt() {
    stone = 0;
    lbs_left = 0;
    lbs = 0;
}

Stonewt::Stonewt(double p_lbs) {
    lbs = p_lbs;
    stone = int(p_lbs) / lbs_per_stone;
    lbs_left = int(p_lbs) % lbs_per_stone;
}

Stonewt::Stonewt(int p_stone, double p_lbs_left) {
    stone = p_stone;
    lbs_left = p_lbs_left;
    lbs = stone * lbs_per_stone + p_lbs_left;
}

Stonewt::~Stonewt() {}

void Stonewt::show_lbs() const {
    cout << lbs << " pounds\n";
}

void Stonewt::show_stone() const {
    cout << stone << " stones and " << lbs_left << " pounds\n";
}

Stonewt:: operator int() {
    return int(lbs + 0.5);
}

Stonewt::operator double() {
    return lbs;
}

Stonewt Stonewt::operator*(int n) const {
    return Stonewt(lbs*n);
}

Stonewt operator*(int n, const Stonewt & stn) {
    return Stonewt(n * stn.lbs);
}