#include <iostream>
using namespace std;

int main() {

	int n = 0, i;
    double y = 1.;
    cout << "Enter your number: ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        y = 1 + 1/y;
    }
    cout << y;

}