#include <iostream>
using namespace std;

int main() {

    setlocale (LC_ALL,"Russian");

    // Здесь инициализация машины без диалога
    // нелепо спрашивать у подошедшего сотрудника какой
    // остаток молока и воды находится в машине.
    // Представим, что утром ее заправил специалист.
    //
    int waterReserve = 1000;     // volume water in mls
    int milkReserve = 1000;      // volume milk in mls
    int waterForAmericano = 300;
    int countForAmericano = 0;
    int waterForLatte = 30;
    int milkForLatte = 270;
    int countForLatte = 0;
    bool americanoON = true;
    bool latteON = true;
    int answer = 0;
    string errorWater = "** Не хватает воды для напитка **\n";
    string errorMilk = "** Не хватает молока для напитка **\n";
    string drinkReady = "Ваш напиток готов\n";

    while ( americanoON || latteON )
    {
        cout << "\nВыберите напиток:";
        if (americanoON)  { cout << "\nАмерикано:\t1"; }
        if (latteON) { cout << "\nЛатте:\t\t2"; }
        cout << endl;
        cin >> answer;

        switch (answer)
        {
            case 1:
                if (waterReserve >= waterForAmericano)
                {
                    waterReserve -= waterForAmericano;
                    cout << drinkReady;
                    countForAmericano++;
                } else {
                    cout << errorWater;
                    americanoON = false;
                };
                break;
            case 2:
                if (waterReserve >= waterForLatte && milkReserve >= milkForLatte)
                {
                    waterReserve -= waterForLatte;
                    milkReserve -= milkForLatte;
                    cout << drinkReady;
                    countForLatte++;
                } else
                {
                    waterReserve < waterForLatte ? cout << errorWater : cout << errorMilk;
                    latteON = false;
                };
                break;
        }

    }
    cout << "\n\n************* ОТЧЕТ ****************\n";
    cout << "Приготовлено чашек американо = " << countForAmericano << endl;
    cout << "Приготовлено чашек латте = " << countForLatte << endl;
    cout << "Остаток воды в машине = " << waterReserve << endl;
    cout << "Остаток молока в машине = " << milkReserve << endl;

    return 0;
}
