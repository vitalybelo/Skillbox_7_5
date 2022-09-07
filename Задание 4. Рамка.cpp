#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");

    int x, y;
    int frameXSize;
    int frameYSize;
    char fillBox;

    cout << "Введите ширину и высоту рамки = ";
    cin >> frameXSize >> frameYSize;
    cout << endl;

    for ( y = 1; y <= frameYSize; y++)
    {
        if ( y == 1 || y == frameYSize) fillBox = '-'; else fillBox = ' ';

        for ( x = 1; x <= frameXSize; x++) {
            if ( x == 1 || x == frameXSize ) {
                cout << "|";
            } else cout << fillBox;
        }
        cout << endl;
    }

    return 0;
}
