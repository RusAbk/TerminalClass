#include <iostream>
#include "td.h"

using namespace std;

int main() {
    TD::clrscr();
    TD::gotoxy(30, 5);
    vector<int> styles = {TD::italic, TD::bright};
    TD::setStyle(styles);
    TD::setStyle(TD::underlined);
    TD::setColors(1, 9);
    cout << "Hello, World!" << endl;
    TD::reset();
}