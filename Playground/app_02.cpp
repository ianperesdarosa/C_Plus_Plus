#include <iostream>
using namespace std;

//operadores
int main() {
    float peso;
    float altura;
    float calc;

    cout << "Peso: ";
    cin >> peso;
    cout << "Altura: ";
    cin >> altura;
    calc = peso / (altura * altura);
    cout << "Resultado: " << calc;
    
    return 0;
}