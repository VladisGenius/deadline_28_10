#include <iostream>
using namespace std;

int main() {

    int a[10]{-24,56,-34,56,12,3,98,-22,56,-11};

    int equal = 0;

    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }

    for(int j = 0; j < 9; j++) {
        for(int i = j+1; i < 10; i++) {
            if(a[j] == a[i]) equal++;
        }
    }

    cout << endl << equal;  
}