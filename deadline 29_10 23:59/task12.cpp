#include <iostream>
using namespace std;

int main() {

    int line = 1, b = 0;

    int a[15]{9,56,56,56,56,56,56,56,87,-11,-11,-11,-11,-11,-11};

    for(int i = 0; i < 15; i++) {
        cout << a[i] << " ";
    } 

    cout << endl;
    
    for(int i = 1; i < 15; i++) {
        if(a[i]==a[i-1]) {
            line += 1;
        }
        else if(line >= b) {
            b = line; 
            line = 1;
        }
        else
            line = 1;
    } 

    if(line>b) b = line;

    cout << b;
}