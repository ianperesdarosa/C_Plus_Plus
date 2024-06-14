#include <iostream>
using namespace std;

int main() {
    string car = "Toyota";
    string* value = &car;

    //Usar o ponteira do value na variável car
    cout << *value << "\n";
    //Retorna o valor "Toyota"

    *value = "Bmw";

    cout << *value << "\n";

    return 0;
}