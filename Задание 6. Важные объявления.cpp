#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");

    int colonLength;
    int exclamatorySign;
    char fillSpace;

    do {
        cout << "Введите длину колонтитула = "; cin >> colonLength;
    } while (colonLength <=0 );
    do {
        cout << "Введите количество !!! знаков = "; cin >> exclamatorySign;
    } while ( exclamatorySign > colonLength );
    cout << endl;

    int startPos = (colonLength - exclamatorySign) / 2;
    int finishPos = startPos + exclamatorySign;

    for ( int i=0; i < colonLength; i++)
    {
        if ( i >= startPos && i < finishPos) {
            fillSpace = '!';
        } else fillSpace = '~';
        cout << fillSpace;
    }
    cout << endl;

    return 0;
}
