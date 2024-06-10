#include <iostream>
using namespace std;

enum level {EASY, MEDIUM, HARD}; 

int main() {
    enum level myvar = EASY;

    cout << myvar;

    return 0;
}