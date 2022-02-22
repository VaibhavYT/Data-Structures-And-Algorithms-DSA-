#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr1[n], arr2[m];
    int ok;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];

        for (int i = 0; i < m; i++)
        {

            cin >> arr2[i];

            if (n > m)
            {
                int ok = sizeof(arr1)/sizeof(arr1[0]);
            }
            else
            {
                int ok = sizeof(arr2)/sizeof(arr2[0]);
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    ok++;
                }
                
            }
            
            if (arr1[i] != arr2[i])
            {
                ok++;
            }
        }
    }

    cout << ok;
    return 0;
}