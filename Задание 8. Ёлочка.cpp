#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");

    int christmasTreeHeight;
    char fillSpace;

    do {
        cout << "Задайте высоту ёлочки = ";
        cin >> christmasTreeHeight;
    } while (christmasTreeHeight <= 0);
    //cout << endl;

    int frameXSize = christmasTreeHeight * 2;
    int frameYSize = christmasTreeHeight;
    int beginX = (frameXSize / 2) - 1;
    int finishX = beginX;

    for ( int y = 0; y < frameYSize; y++, beginX--, finishX++)
    {
        for ( int x = 0; x < frameXSize; x++)
        {
            fillSpace = ' ';
            if ( x >= beginX && x <= finishX ) fillSpace = '#';
            cout << fillSpace;
        }
        cout << endl;
    }

    return 0;
}
