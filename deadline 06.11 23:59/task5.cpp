#include <iostream>
#include <math.h>
using namespace std;


int main() {

    double x, y, y1;

    cout << "Enter x: ";
    cin >> x;

    y = x;

    do {
        y1 = y;
        y = 0.5 * (y + 3 * x / (2 * y * y + x / y));
    }
    while( abs(y-y1) > 1/100000 );

    cout << y;
}