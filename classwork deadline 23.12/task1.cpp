#include <iostream> 
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int res = 1;
    for(int i = 2; i <= num; i++) {
        res *= i;        
    }

    cout << res;
}
