#include <iostream>
using namespace std;

int main() {
    string w1, w2;
    cin >> w1 >> w2;
    if(w1[0] == w2[w2.length()-1]) cout << "TRUE";
    else 
    cout << "FALSE";
}