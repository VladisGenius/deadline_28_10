#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int* arr = new int[n+1];
    arr[0] = 0;
    
    for(int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }

    int q, i, j;
    cin >> q;
    ++q;
    while(--q) {
        cin >> i >> j;
        --i;
        cout << "\n" << arr[j] - arr[i];
    }

    delete[] arr;
    
}