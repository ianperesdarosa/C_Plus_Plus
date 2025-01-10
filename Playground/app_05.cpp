#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Insira o número do mês do seu aniversário! ";
    cin >> month;

    switch(month){
        case 1:
            cout << "Janeiro << \n";
        break;
        case 2:
            cout << "Fevereiro << \n";
        break;
        case 3:
            cout << "Março << \n";
        break;
        case 4:
            cout << "Abril << \n";
        break;
        case 5:
            cout << "Maio << \n";
        break;
        case 6:
            cout << "junho << \n";
        break;
        case 7:
            cout << "Julho << \n";
        break;
        case 8:
            cout << "Agosto << \n";
        break;
        case 9:
            cout << "Setembro << \n";
        break;
        case 10:
            cout << "Outubro << \n";
        break;
        case 11:
            cout << "Novembro << \n";
        break;
        case 12:
            cout << "Dezembro << \n";
        break;
    }

    return 0;
}