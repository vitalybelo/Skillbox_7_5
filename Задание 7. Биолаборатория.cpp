#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");

    int i, n;
    int bacteriaProgress = 0;
    int antibioticPutted;

    do {
        cout << "Введите количество бактерий = "; cin >> bacteriaProgress;
    } while (bacteriaProgress <= 0);
    do {
        cout << "Введите количество антибиотика = "; cin >> antibioticPutted;
    } while (antibioticPutted <= 0 );
    cout << endl;

    for ( i=10, n=1; i>0; i--, n++) {
        bacteriaProgress *= 2;
        bacteriaProgress -= i * antibioticPutted;
        if (bacteriaProgress <=0 ) break;
        else {
            cout << "после " << n << "-го часа бактерий в чашке = " << bacteriaProgress << endl;
        }
    }
    if ( i == 0 ) {
        cout << "\nАнтибиотик больше не действует,\n";
        cout << "количество бактерий увеличивается с каждым часом в 2 раза\n";
    } else {
        cout << "\nКоличество часов для уничтожения бактерий =  " << n << endl;
    }

    return 0;
}
