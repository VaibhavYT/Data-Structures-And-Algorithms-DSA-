#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr1[n];
    int arr2[n - 1];
    int arr3[n - 2];
    for (int i = 0; i < n; i++)
    {

        int arr1[i];
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        int arr2[i];
    }
    

    for (int i = 0; i < n - 2; i++)
    {
        int arr3[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n-1);
    sort(arr3, arr3 + n-2);
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << arr1[i] << endl;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr3[i] != arr2[i])
        {
            cout << arr2[i] << endl;
            break;
        }
    }
}
