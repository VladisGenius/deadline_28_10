#include <iostream>
using namespace std;

int power_0(int x, int y) {
    int res = 1;

    while (y > 0) {
        if (y & 1) {
            res = res * x;
        }
        y = y >> 1;
        x *= x;
    }

    return res;
}

#include <iostream>

int power_1(int x, int y) {
    if (y == 0) {
        return 1;
    }
    int temp = power_1(x, y / 2);
    if (y % 2 == 0) {
        return temp * temp;
    } else {
        return x * temp * temp;
    }
}

int main() {
    int x, y;
    cout << "Enter your number: ";
    cin >> x;
    cout << "Enter natural power (>0): ";
    cin >> y;
    cout << power_0(x, y) << endl;
    cout << power_1(x, y);
    return 0;
}


/*//функция рекурсивного возведения в степень
int Power(int& refNum, int power) {
    if(power == 0){
        refNum = 1;
        return 1;
    }
    if(power % 2 == 0) {
        int p = Power(refNum, power/2);
        p *= p;
        return p;
    }
    else{ 
        return refNum * Power(refNum, power-1); 
    }

    return refNum;
}

int main() {
    int num, power;
    cout << "Enter your number: ";
    cin >> num;
    cout << "Enter natural power (>0): ";
    cin >> power;

    Power(num, power);
    //cout << num;
}*/