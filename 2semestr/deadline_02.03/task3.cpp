#include <iostream>
using namespace std;

int main() {
    long long int num = 7435421243;
    int proc = num/1024;
    int kilobytes = (proc==0) ? proc : proc+1;
    int megabytes = (proc/1024==0) ? proc/1024 : proc/1024+1;
    int gigabytes = (proc/1024/1024==0) ? proc/1024/1024 : proc/1024/1024+1;

    cout << "Kilobytes: " << kilobytes << '\n';
    cout << "Megaobytes: " << megabytes << '\n';
    cout << "Gigabytes: " << gigabytes;
}