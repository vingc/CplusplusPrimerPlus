#include <iostream>
#include <cstring>
#include <vector>
#include <array>
using namespace std;

int main() {
    char actor[30] = {};
    char * actor2 = new char[30];
    short betsie[100]{};

    //stl array
    array<float, 13> chuck;
    array<long double, 64> dipsea;

    int odd[5] = {1,3,5,7,9};
    int even = odd[0] + odd[4];
    array<float, 2> ideas = {1.2f,2.2f};
    cout << ideas[1]<<endl;

    char szAr[] = "cheeseburger";
    string strT = "Waldorf Salad";

    struct fish {
        char type[10];
        int weight; //ounce
        float length; //inch
    };

    fish whiteFish = { "whitefish", 20, 102.1f };

    enum Response { No, Yes, Maybe };

    double ted = 3.3;
    double * pTed = &ted;
    cout << "*pTed = " << *pTed << endl;

    float treacle[10];
    float * pArray = treacle;
    cout << "treacle[0]:" << *pArray << ", treacle[9]:" << *(pArray + 9) << endl;

    cout << "Enter the length or dynamic array:";
    int len = 0;
    cin >> len;
    int * dArray = new int[len];
    vector<int> vi(len);

    fish * pFish = new fish;

    const int strNum = 10;
    std::vector<string> vs[strNum];
    std::array<string, strNum> as;
}

