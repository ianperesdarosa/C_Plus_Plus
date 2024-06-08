#include <iostream>
using namespace std;

/* int main() {
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    cout << letters[1][1] << "\n";
    return 0;

    //Resultado >> F <<
} */

int main() {
    string letters[3][5] = {
        {"A", "B", "C", "D", "E"},
        {"F", "G", "H", "I", "J"},
        {"K", "L", "M", "N", "O"}
    };

    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 5; j++) {
            cout << letters[i][j] << ", ";
        }
    }
    
    return 0;
}
