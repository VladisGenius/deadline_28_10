#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int const MatrixSize = 7; //размер матрицы
    int Matrix[MatrixSize][MatrixSize]{}; //матрица
    int RowSum[MatrixSize]{}; //массив с суммами строк
    int MaxRowSum = 0; //номер строки с макс суммой

    //заполняем матрицу случайными числами от 20 до 100
    srand(time(NULL));
    for(int i = 0; i < MatrixSize; i++) {
        cout << "|  ";
        for(int j = 0; j < MatrixSize; j++) {
            Matrix[i][j] = rand() % 91 + 10;
            RowSum[j] += Matrix[i][j];
            cout << Matrix[i][j] << "  ";
        }
        cout << "|" << endl; 
    }

    //выводим сумму эл-ов в столбцах и строках
    for(int i = 1; i <= MatrixSize; i++) {
        cout << i << " row sum: ";
        cout << RowSum[i-1] << endl;
    }
    
    //поиск макс строки с макс суммой 
    for(int i = 1; i < MatrixSize; i++) {
        if(RowSum[i] > RowSum[MaxRowSum]) {
            MaxRowSum =  i;
        }
    }

    cout << "The row with the max sum: " << MaxRowSum + 1;
}