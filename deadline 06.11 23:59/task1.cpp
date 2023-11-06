#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double n = 2., k = 2., s;

    cin >> n, k;

    for(double i = 1.; i <= n; i++) {
        s += pow(i, k);
    }

    cout << s;
}