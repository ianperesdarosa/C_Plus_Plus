#include <iostream>
using namespace std;

int main() {
    int nota1, nota2, nota3;

    cout << "Nota do Primeiro Trimestre: ";
    cin >> nota1;
    cout << "Nota do Segundo Trimestre: ";
    cin >> nota2;
    cout << "Nota do Terceiro Trimestre: ";
    cin >> nota3;

    int res = nota1 + nota2 + nota3;
    
    if (res < 18) {
        cout << "Reprovado!";
    } 
    else if(res >= 18) {
        cout << "Aprovado mas sera indicado aulas extras";
    }
    else if (res > 20) {
        cout << "Aprovado! Parábens";
    }
}