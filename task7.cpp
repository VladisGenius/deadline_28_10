#include <iostream>
using namespace std;

int main() {
    int a = 1000;
    for(a; a<=9999; a++) {
        int s = 0;
        if(a/1000 + a/100%10 + a/10%10 + a%10 == 15) 
            cout << a << endl;
    }
}