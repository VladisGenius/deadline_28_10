#include <iostream>
using namespace std;

int main() {
    int dd, mm, yy;
    int days = 0;
    cout << "Enter the date (dd, mm, yy):";
    cin >> dd >> mm >> yy;
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if 
    (
        ((yy%4==0) && (yy % 100 != 0)) ||
        (yy % 400 == 0)
    )
    month[1] = 29;  
    
    for(int i = mm; i < 12; i++) {
        days += month[i];       
    }

    days += month[mm-1] - dd;
    cout << days;
}