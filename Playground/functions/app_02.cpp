#include <iostream>
using namespace std;

void myFunc(string fName, string lName) {
    cout << fName << " " << lName << "\n";
}

int main () {
    myFunc("Ian", "Peres Da Rosa");
    myFunc("Pedro", "Santos");
    myFunc("Maria", "Eduarda");
    return 0;
}