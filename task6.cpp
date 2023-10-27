#include <iostream>
using namespace std;

int main() {

    int n;
    
    while(true) {
        cout << "Enter the natural number, 0 to quit:" << " ";
        cin >> n;
        
        if (n != 0) {
            int max = 0;
            while (n > 0) {
                if ((n%10) > max) max = n%10; 
            n /= 10;
            }
            cout << max << endl;
        }
        else
            break;         
    }


}