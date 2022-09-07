#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");
    int foodLimit = 100;
    int foodMonth = 4;
    int i = 1;

    cout << "\nНачальный запас гречки в мешке = " << foodLimit << " кг" << endl;

    for ( ; foodLimit > foodMonth; i++) {
        cout << "После месяца № " << i << " в мешке осталось = " << (foodLimit -= foodMonth) << " кг гречки\n";
    }
    cout << "На " << i << " месяце, доели последнюю гречку.\n";

    return 0;
}
