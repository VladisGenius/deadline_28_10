#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    
    int max, min, crosses;

    if(n>m) {
        max = n - 1;
        min = m - 1;
    }
    else {
        max = m - 1;
        min = n - 1; 
    }

    if(max==min) cout << min;
    else   
        for(int i = 1; i <= min; i++) {

            if((max*i)%min == 0) crosses++;

        }

        cout << max + min - crosses;

}