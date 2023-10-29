#include <iostream>
using namespace std;

int main() {

    int a[10]{24,56,34,67,12,3,98,22,87,11};

    int max = -99999;
    int min = 99999;

    for(int i = 0; i < 10; i++) {
        if(a[i]>max) max = a[i];
        if(a[i]< min) min = a[i];
        cout << a[i] << " ";
    }

    cout << endl << max << " " << min << endl;

    cout << max - min;
}