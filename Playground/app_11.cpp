#include <iostream>
using namespace std;

int main() {
    struct
    {
        string nome;
        int idade;
        string sexo;
    } myStruct;

    myStruct.nome = "Ian";
    myStruct.idade = 19;
    myStruct.sexo = "Masculino";

    cout << myStruct.nome << "\n"; 
    cout << myStruct.idade << "\n";
    cout << myStruct.sexo << "\n";

    return 0;
    
}