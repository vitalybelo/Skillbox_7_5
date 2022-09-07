#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int limitLO = 0;   // нижний передел диапазона чисел
    int limitHI = 63;  // верхний передел диапазона чисел
    int findLoEdge = limitLO;
    int findHiEdge = limitHI;
    int checkNumber = (findHiEdge + findLoEdge) / 2;
    int guessNumber;
    int answer;

    do {
        cout << "Введите число от " << limitLO << " до " << limitHI << " = ";
        cin >> guessNumber;
    } while (guessNumber < limitLO || guessNumber > limitHI);

    while (true)
    {
        cout << "Ваше число больше чем ? = " << checkNumber << endl;
        do {
            cout << "\tВведите ( 1 = да | 0 = нет ) :: "; cin >> answer;
        } while ( answer != 1 && answer != 0 );

        answer ? findLoEdge = checkNumber : findHiEdge = checkNumber;

        if ((findHiEdge - findLoEdge) == 0) break;
        else
        {
            if ((findHiEdge - findLoEdge) == 1)
            {
                if (answer) {
                    checkNumber = findHiEdge;
                    break;
                } else {
                    checkNumber = findLoEdge;
                }
            } else {
                checkNumber = (findHiEdge + findLoEdge) / 2;
            }

        }
    }

    cout << "Я угадал, ваше число = " << checkNumber << endl;
    return 0;
}