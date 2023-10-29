#include <iostream>
using namespace std;

int main() {

    double a[10]{24,56,34,67,12,3,98,22,87,11};

    double max = -99999;

    for(int i = 0; i < 10; i++) {
        if(a[i]>max) max = a[i];
        cout << a[i] << " ";
    }

    cout << endl << max << endl;

    for(int i = 0; i < 10; i++) {
        a[i] /= max;
        cout << a[i] << " ";
    }
}