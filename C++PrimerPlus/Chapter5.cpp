#include <iostream>
#include <cstring>
#include <vector>
#include <array>
using namespace std;

int main() {
    //cout << strcmp("Zap", "zap");
    //cout << strcmp("zbp", "zap");

    cout << "Enter the lines:" << endl;
    int line = 0;
    cin >> line;

    if (line <= 0 )
        return -1;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < line; j++) {
            if (j < line - i - 1) 
                cout << ".";            
            else
                cout << "*";
        }
        cout << endl;
    }


    return 0;
}