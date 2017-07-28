#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct free_throws {
    string name;
    int percent;
    
};

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

const free_throws & clone(free_throws & ft);

void song( const char * name = "aa", int times = 1 );

template <typename T>
void tplTest(T a);

template<> void tplTest(int a);
template void tplTest<int>(int a);
void boxPrint(box & input);
void boxCalcuVolume(box & input);


int main() {
    song();

    tplTest(10);
    box b1 = { "vingc", 10.0, 11.1, 12.3 };
    boxPrint( b1 );
    boxCalcuVolume( b1 );
}

const free_throws & clone(free_throws & ft) {
    free_throws * pt = new free_throws;

    *pt = ft; //copy struct info
    return *pt;
}

void song(const char * name, int times) {
    cout << "name, times = " << name << ", " << times<<endl;
}

template <typename T>
void tplTest(T a) {
    cout << "tplTest() template implicit instant" << endl;
}

template<> void tplTest(int a) {
    cout << "tplTest() explicit specialization\n";
}


void boxPrint(box & input) {
    cout << "maker: " << input.maker << endl;
    cout << "height: " << input.height << endl;
    cout << "width: " << input.width << endl;
    cout << "length: " << input.length << endl;
    cout << "volume: " << input.volume << endl;
}

void boxCalcuVolume(box & input) {
    input.volume = input.height * input.length * input.width;
    cout << "volume: " << input.volume << endl;
}

template<typename T> T bigger(T a, T b) {

}

template<> box & bigger(box & a, box & b) {
    return a.volume > b.volume ? a : b;
}