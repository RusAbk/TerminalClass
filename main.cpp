#include <iostream>
#include "td.h"

using namespace std;

int main() {
    TD::clrscr();
    TD::gotoxy(30, 5);
    TD::setStyle(TD::reversed);
    TD::setColors(1, 9);
    cout << "Hello, World!" << endl;
    TD::reset();
}