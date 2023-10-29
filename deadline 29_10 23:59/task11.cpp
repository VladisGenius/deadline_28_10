#include <iostream>
using namespace std;

int main() {

    int min, max;
    
    cin >> min >> max;

    int a[10]{-24,56,-34,-67,12,3,98,-22,87,-11};

    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    } 

    cout << endl;
    
    for(int i = 0; i < 10; i++) {
        if((min <= a[i]) and (a[i]) <= max) cout << i << " ";
    } 
}