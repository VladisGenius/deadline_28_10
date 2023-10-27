#include <iostream>
using namespace std;

int main() {
    
    int n;

    while(true) {
        cout << "Enter three-digit number, 0 to quit:" << endl;
        cin >> n;

        if (n != 0) {
            int n1 = n/100; int n2 = n/10%10; int n3 = n%10;

            cout << n1 * n2 * n3 << endl;
        }
        else
            break;
    }
}
