#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s;
    while(n) {
        s += n%10;
        n /= 10;
    }
    cout << abs(s);
}