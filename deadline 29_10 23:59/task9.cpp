#include <iostream>
using namespace std;

int main() {

    int a[10]{-24,56,-34,-67,12,3,98,-22,87,-11};

    double sum, average;

    for(int i = 0; i < 10; i++) {
        sum += a[i];
        cout << a[i] << " ";
    }

    cout << endl;
    average = sum/10;

    for(int i = 0; i < 10; i++) {
        if(a[i]>average) cout << a[i] << " ";
    }
}