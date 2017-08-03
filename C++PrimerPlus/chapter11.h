#pragma once
#ifndef CHAPTER_10_H
#define CHAPTER_10_H

class Stonewt {
private:
    enum { lbs_per_stone = 14 };
    int stone;
    double lbs_left; // stone + lbs_left
    double lbs; //only lbs
public:
    Stonewt();
    Stonewt(double p_lbs);
    Stonewt(int p_stone, double p_lbs_left);
    ~Stonewt();

    void show_lbs() const;
    void show_stone() const;
    //convert function
    operator int();
    operator double();
    Stonewt operator*(int n) const;
    friend Stonewt operator*(int n, const Stonewt & stn);
};


#endif
