#pragma chapter12

#ifndef CHAPTER_12_H
#define CHAPTER_12_H

class Cow {
private:
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char *nm, const char *ho, double wt);
    Cow(const Cow & cw);
    ~Cow();
    Cow & operator=(const Cow & cw);
    void ShowCow() const;

};

#endif
