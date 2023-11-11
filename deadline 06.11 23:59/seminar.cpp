#include <iostream>
using namespace std;

int main() {
    
    int a[5]{1,2,2,4,11};
    int b[6]{1,2,6,7,8,9};
    int len_a = sizeof(a)/sizeof(a[0]);
    int len_b = sizeof(b)/sizeof(b[0]);
    int size_arr = len_a + len_b;

    cout << "Array a: ";
    for(int i = 0; i < len_a; i++) cout << a[i] << " ";
    cout << endl << "Array b: ";
    for(int i = 0; i < len_b; i++) cout << b[i] << " ";

    //пересечение
    int k_m = 0;
    int *c = new int[size_arr];
    for(int i = 0; i < len_a; i++) {
        for(int j = 0; j < len_b; j++) {
            if(a[i] == b[j]) {
                c[k_m] = a[i]; 
                k_m++;
            }
        }
    }
    
    int *arr1 = new int[k_m];
    for(int i = 0; i < k_m; i++) arr1[i] = c[i];
    
    cout << endl << "Crossing: ";
    for(int i = 0; i < k_m; i++) cout << arr1[i] << " ";

    delete [] c;

    //объединение
    int k_u = 0, a_u = 0, b_u = 0;
    int *d = new int[size_arr];
    while(a_u < len_a || b_u < len_b) {
        if(a_u == len_a)
            d[k_u++] = b[b_u++];

        else if(b_u == len_b) 
            d[k_u++] = a[a_u++];

        else if(a[a_u] == b[b_u]) {
            d[k_u] = a[a_u];
            ++a_u;
            ++b_u;
            ++k_u;
        }

        else if(a[a_u] < b[b_u]) 
            d[k_u++] = a[a_u++];

        else 
            d[k_u++] = b[b_u++];
    }
    
    int *arr2 = new int[k_u];
    for(int i = 0; i < k_u; i++) arr2[i] = d[i];
    
    cout << endl << "Union: ";
    for(int i = 0; i < k_u; i++) cout << arr2[i] << " ";
    
    delete [] d;
    delete [] arr2;

    //разность     
    int k_d = 0, a_d = 0, a_cross = 0;
    int len_a_cross = sizeof(arr1)/sizeof(arr1[0]);
    int *e = new int[size_arr];
    while(a_d < len_a) {
        if(a_d == len_a)
            break;

        else if(a_cross == len_a_cross + 1) 
            e[k_d++] = a[a_d++];

        else if(a[a_d] == arr1[a_cross]) {
            ++a_d;
            ++a_cross;
        }

        else 
            e[k_d++] = a[a_d++];
    }

    int *arr3 = new int[k_d];
    for(int i = 0; i < k_d; i++) arr3[i] = e[i];
    
    cout << endl << "Difference: ";
    for(int i = 0; i < k_d; i++) cout << arr3[i] << " ";
    
    delete [] e;
    delete [] arr3;
    delete [] arr1;
}



/*  int k_d = 0, a_d = 0, b_d = 0;
    int *e = new int[size_arr];
    while(a_d < len_a) {
        if(a_d == len_a)
            break;

        else if(b_d == len_b) 
            e[k_d++] = a[a_d++];

        else if(a[a_d] == b[b_d]) {
            ++a_d;
            ++b_d;
        }

        else 
            e[k_d++] = a[a_d++];
    }*/