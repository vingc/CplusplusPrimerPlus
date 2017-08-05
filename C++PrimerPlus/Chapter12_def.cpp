#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

#include "chapter12.h"

using namespace std;

Cow::Cow() {
    name[0] = '\0';
    hobby   = new char[1];
    hobby[0] = '\0';
    weight  = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    strncpy(name, nm, 20);
    name[19] = '\0';
    int len = strlen( ho );
    hobby = new char[ len + 1 ];
    strncpy(hobby, ho, len + 1);
    weight = wt;
}

Cow::Cow(const Cow & cw) {
    strncpy(name, cw.name, 20);
    name[19] = '\0';
    
    int len = strlen(cw.hobby);
    hobby = new char[len + 1];
    strncpy(hobby, cw.hobby, len + 1);
    
    weight = cw.weight;
}

Cow::~Cow() {
    delete[] hobby;
}

Cow & Cow::operator=(const Cow & cw) {
    if (this == &cw)
        return *this; //self assignment

    delete[] hobby;
    
    strncpy(name, cw.name, 20);
    name[19] = '\0';

    int len = strlen(cw.hobby);
    hobby = new char[len + 1];
    strncpy(hobby, cw.hobby, len + 1);

    weight = cw.weight;

    return *this;
}

void Cow::ShowCow() const {
    cout << "name: " << name << endl;
    cout << "hobby: " << hobby;
    cout << ", weight: " << weight << endl;
}