#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double x1, y1, x2, y2, x3, y3, x4, y4, i = 0;
    double a, b, c;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    
    a = (sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)));
    b = (sqrt((x1-x3) * (x1-x3) + (y1-y3) * (y1-y3)));
    c = (sqrt((x2-x3) * (x2-x3) + (y2-y3) * (y2-y3)));

    if(((a==b) && (c == sqrt(2)*a) )) {
        x4 = x3 + x2 - x1;
        y4 = y3 + y2 - y1;
        i = 1;
        
        cout << "There is your square!" << endl;
        cout << "x4: " << x4 << endl;
        cout << "y4: " << y4 << endl;
    }
    
    if(((a==c) && (b == sqrt(2)*a))) {
        x4 = x1 + x3 - x2;
        y4 = y1 + y3 - y2;
        i = 1;
        
        cout << "There is your square!" << endl;
        cout << "x4: " << x4 << endl;
        cout << "y4: " << y4 << endl;
    }
    
    if(((b==c) && (a == sqrt(2)*b) )) {
        x4 = x2 + x1 - x3;
        y4 = y2 + y1 - y3;
        i = 1;
        
        cout << "There is your square!" << endl;
        cout << "x4: " << x4 << endl;
        cout << "y4: " << y4 << endl;
    }
    if(i == 0) {
        cout << "This are not the square coordinates";
    }
    return 0;
}