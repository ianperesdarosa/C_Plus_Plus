#include <iostream>
using namespace std;

int main() {
    enum level {
        LOW,
        MEDIUM,
        HIGH
    }

    cout << level[0];

    return 0;
}