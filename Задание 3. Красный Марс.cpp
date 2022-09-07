#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");

    int spaceXLimit = 20;
    int spaceYLimit = 10;
    int spaceXLimit1 = spaceXLimit+1;
    int spaceYLimit1 = spaceYLimit-1;
    int spaceXpos = spaceXLimit / 2;
    int spaceYpos = spaceYLimit / 2;
    char spaceComm;
    int x, y;

    do {
        //cout << "\033[2J\033[1;1H";
        cout << "\nНажимате W,S,A,D - чтобы двигать\n";

        for (x=0; x <= (spaceXLimit1); x++) { cout << "-"; }
        cout << endl;
        for (y=0; y < spaceYLimit; y++)
        {
            for (x=0; x <= (spaceXLimit1); x++)
            {
                if (x == 0 || x == (spaceXLimit1)) {
                    cout << "|";
                } else {
                    if (x==spaceXpos && y==spaceYpos) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        for (x=0; x <= (spaceXLimit+1); x++) { cout << "-"; }
        cout << endl;
        do {
            cin >> spaceComm;
        } while(spaceComm != 'W' && spaceComm != 'w' &&
                spaceComm != 'S' && spaceComm != 's' &&
                spaceComm != 'A' && spaceComm != 'a' &&
                spaceComm != 'D' && spaceComm != 'd' );

        switch (spaceComm)
        {
            case 'a':
            case 'A':
                if ( spaceXpos > 1) spaceXpos--;
                break;
            case 'd':
            case 'D':
                if ( spaceXpos < spaceXLimit) spaceXpos++;
                break;
            case 'w':
            case 'W':
                if ( spaceYpos > 0) spaceYpos--;
                break;
            case 's':
            case 'S':
                if ( spaceYpos < spaceYLimit1) spaceYpos++;
                break;
        }

    } while (true);



    return 0;
}
