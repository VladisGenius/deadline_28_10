#include <iostream>
using namespace std;

int main() {

    int a[10]{-24,56,-34,-67,12,3,98,-22,87,-11};

    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
     cout << endl;
     
    for(int i = 0; i < 9; i++) {
        if(a[i+1]>a[i]) cout << a[i+1] << " ";
    }
}