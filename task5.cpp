#include <iostream>
using namespace std;

int main() {
    
    int n;
    
    while(true) {
        cout << "Enter the natural number, 0 to quit:" << " ";
        cin >> n;
        
        if (n != 0) {
            int i = 0;
            while (n > 0) {
                if ((n%10)%2 == 0) i++; 
            n /= 10;
            }
            cout << i << endl;
        }
        else
            break;         
    }
}