#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct free_throws {
    string name;
    int percent;
    
};

const free_throws & clone(free_throws & ft);

int main() {

}

const free_throws & clone(free_throws & ft) {
    free_throws * pt = new free_throws;

    *pt = ft; //copy struct info
    return *pt;
}