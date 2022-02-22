#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[0];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
        {
           int t = arr[i];
            arr[i] = arr[0];
            arr[0] = t;
        }
        if (arr[i] == 2)
        {
          int  te = arr[i];
            arr[i] = arr[n];
            arr[n] = te;
        }
        for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    }
    
}