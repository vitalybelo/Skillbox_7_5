#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");

    int sizeXAxes = 51;
    int sizeYAxes = 19;
    int sizeXAxes1 = sizeXAxes-1;
    int centerX = sizeXAxes / 2;
    int centerY = sizeYAxes / 2;
    char fillSpace;

    cout << endl;
    for ( int y = 0; y < sizeYAxes; y++ )
    {
        for (int x = 0; x < sizeXAxes; x++ )
        {
            if ( y == centerY ) {
                fillSpace = '-';
                if ( x == sizeXAxes1) fillSpace = '>';
                if ( x == centerX ) fillSpace = '+';
            }
            else
            if ( x == centerX ) {
                fillSpace = '|';
                if ( y == 0 ) fillSpace = '^';
            }  else fillSpace = ' ';

            cout << fillSpace;
        }
        cout << endl;
    }

    return 0;
}
