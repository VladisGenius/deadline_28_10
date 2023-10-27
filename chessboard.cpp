#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    int x1, x2, y1, y2;

    cout << "Enter the X1, X2, Y1, Y2" << " ";
    cin >> x1 >> x2 >> y1 >> y2;

    //ладья
    if(x1==x2 or y1==y2) 
        cout << "Correct for the rook" << endl;
    else
        cout << "Uncorrect for the rook" << endl;

    //король
    if (abs(x1-x2) <= 1 and abs(y1-y2) <= 1)
        cout << "Correct for the king" << endl;
    else
        cout << "Uncorrect for the king" << endl;

    //слон
    if (abs(x1-x2) == abs(y1-y2))
        cout << "Correct for the bishop" << endl;
    else
        cout << "Uncorrect for the bishop" << endl;

    //ферзь
    if((abs(x1-x2) == abs(y1-y2)) or (x1==x2 or y1==y2))
        cout << "Correct for the queen" << endl;
    else
        cout << "Uncorrect for the queen" << endl;

    //конь
    if((x1 - 1 == x2 or x1 + 1 == x2) and (y1 - 2 == y2 or y1 + 2 == y2))
        cout << "Correct for the knight" << endl;
    else if((x1 - 2 == x2 or x1 + 2 == x2) and (y1 - 1 == y2 or y1 + 1 == y2))
        cout << "Correct for the knight" << endl;
    else
        cout << "Uncorrect for the knight" << endl;
}