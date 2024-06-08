#include <iostream>
using namespace std;

int main() {
    string cars[7] = {"Bmw", "Volvo", "Ford", "Dodge", "Subaru", "Toyota", "Honda"};

    for(int i = 0; i < sizeof(cars) / sizeof(string); i++) {
        cout << i << "-" << cars[i] << "\n";
    }

    return 0;
}