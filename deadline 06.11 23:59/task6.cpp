#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter your number: ";
    cin >> n;

    if((n%2==0 or n%3==0) and n>=4) {
        cout << "Number " << n << " is composite!";
    }
    else cout << "Youn number is not composite!";

}