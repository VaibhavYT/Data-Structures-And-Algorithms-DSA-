#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n ==1){
        return 0;
    }
    sort(arr, arr + n);
    int c;
    cin >> c;
    int diff = (arr[n-1] - c) - (arr[0] + c);
    cout << diff << endl;
}