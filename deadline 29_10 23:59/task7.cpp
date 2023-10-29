#include <iostream>
using namespace std;

int main() {

    int a[10]{-24,56,-34,-67,12,3,98,-22,87,-11};

    double positive_sum;

    for(int i = 0; i < 10; i++) {
        if(a[i]>0) positive_sum += 1;
        cout << a[i] << " ";
    }

    cout << endl << positive_sum;
}