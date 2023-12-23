#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int sizeArray;
    cout << "Enter the size array: ";
    cin >> sizeArray;
    int* array = new int[sizeArray];
    //заполняем массив случайными числами
    srand(time(NULL));
    cout << "Array { ";
    for(int i = 0; i < sizeArray; i++) {        
        array[i] = rand() % 101;
        cout << array[i] << " ";
    }
    cout << "}";
    }
