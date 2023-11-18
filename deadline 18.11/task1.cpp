#include <iostream>
using namespace std;

int main() {

    int n = 0;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        int el;
        cin >> el;
        a[i] = el;
    }

    int currSum = 0;
    int maxSum = 0;
    int startIndex = 0;

    for(int endIndex = 0; endIndex < n; endIndex++) {
        
        currSum += a[endIndex];

        if(currSum < 0) {
            currSum = 0;
        } 
        
        if(maxSum == 0 || currSum > maxSum) maxSum = currSum;

    }

    cout << maxSum;

}