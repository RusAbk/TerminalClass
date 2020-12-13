#include <iostream>
#include "td.h"

using namespace std;

int main() {
    TD::setStyle(TD::italic);
    TD::setColors(1, 9);
    cout << "Hello, World!" << endl;
    TD::reset();
    TD::goHome();
}