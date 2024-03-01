#include <iostream>
using namespace std;

int main() {
    int s;
    for(int i = 2; i < 101; i++) {
        s += i*i;
    }
    cout << s + 1;
}