#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    /*
    char ch;

    while ( (ch = cin.get()) != '@' ) {
        if ( isdigit(ch) ) {
            continue;
        }

        if ( islower(ch) ) {
            ch = toupper(ch);
        }
        else if ( isupper(ch) ) {
            ch = tolower(ch);
        }

        cout << ch;
    }

    double donation[10];
    double sum = 0;
    int i = 0;

    for ( ; i < 10; i++ ) {
        if ( cin >> donation[i] ) {
            sum += donation[i];
            continue;
        }
        break;
    }

    int bigger = 0;
    double avg = sum / i;

    for (int j = 0; j < i; j++) {
        if ( avg < donation[j] )
            bigger++;
    }

    cout << "avg=" << avg << ",bigger=" << bigger << endl;

    */

    ifstream inFile;
    inFile.open("xxx.txt");
    if ( !inFile.is_open() ) {
        cout << "open file xxx.txt fail!" << endl;
        cout << "EXIT!" << endl;
        exit(EXIT_FAILURE);
    }

    char ch;
    int cnt = 0;
    while ( inFile.get(ch) ) {
        cnt++;
    }

    if ( inFile.eof() ) {
        cout << "Read end the tail!" << endl;
    }
    else if ( inFile.fail() ) {
        cout << "Read unexpected char!" << endl;
    }
    else {
        cout << "unknown reason!" << endl;
    }

    inFile.close();
    cout << "char cnt:" << cnt << endl;
    return 0;

}