#include <iostream>
#include "function.h"

using namespace std;

int main()
{

    const int n = 10;
    //double arr[10];
    char arr[n];

    Add(arr, n);
    Show(arr, n);
    SortArray(arr, n);
    cout << FindMax(arr, n) << endl;
    FindMin(arr, n);
    UpdateArray(arr, n, 35, 3);
    Show(arr, n);
}
