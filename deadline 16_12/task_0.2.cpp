#include <iostream>
using namespace std;

int main() {
    int const MatrixSize = 3;
    int sumColumn[MatrixSize]{}, sumRow[MatrixSize]{};
    int Matrix[MatrixSize][MatrixSize]{};

    //заполняем матрицу
    for(int i = 0; i < MatrixSize; i++) {
        for(int j = 0; j < MatrixSize; j++) {
            cin >> Matrix[i][j];
        }
    }

    //выводим матрицу на консоль + считаем сумму по строкам и столбцам
    for(int i = 0; i < MatrixSize; i++) {
        cout << '|' << " ";
        for(int j = 0; j < MatrixSize; j++) {
            cout << Matrix[i][j] << " ";
            sumColumn[j] += Matrix[i][j];
            sumRow[i] += Matrix[i][j];
        }
        cout << '|' << endl;
    }

    //выводим сумму эл-ов в столбцах и строках
    for(int i = 1; i <= MatrixSize; i++) {
        cout << i << " column sum: ";
        cout << sumColumn[i-1] << endl;
    }
    for(int i = 1; i <= MatrixSize; i++) {
        cout << i << " row sum: ";
        cout << sumRow[i-1] << endl;
    }
}