#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    long mx = -1999999;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        long curr = 0;

        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                curr += arr[k];

                if (curr > mx)
                {
                    mx = curr;
                }
            }
        }
        cout << mx;
    }

    return 0;
}