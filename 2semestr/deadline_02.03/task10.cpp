#include <iostream>
using namespace std;

int main() {
    char chr1 = '1';
    char chr2 = '2';
    char chr3 = '3';
    char chr4 = '4';
    char chr5 = '5';
    int n1 = chr1 - '0';
    int n2 = chr2 - '0';
    int n3 = chr3 - '0';
    int n4 = chr4 - '0';
    int n5 = chr5 - '0';
    cout << 10000*n1 + 1000*n2 + 100*n3 + 10*n4 + n5;
}