#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int columnSize, rowSize;
    cout << "Enter amount of row: ";
    cin >> rowSize;
    cout << "Enter amount of column: ";
    cin >> columnSize;

    int **matrix = new int*[rowSize];

    for(int i = 0; i < rowSize; i++) {
        matrix[i] = new int[columnSize];
    }

    //заполняем массив случайными числами
    srand(time(NULL));
    for(int i = 0; i < rowSize; i++) {
        cout << "|  ";
        for(int j = 0; j < columnSize; j++) {
            matrix[i][j] = rand() % 90 + 10;
            cout << matrix[i][j] << "  ";
        }
        cout << "|" << endl;
    }

    for (int i = 0; i < rowSize; i++) {
        delete [] matrix[i];
    }

    delete [] matrix;
}