#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = x;
        for (int i = 0; i < n; i++)
        {
            x = x + arr[i];
            if (max < x)
            {
                max = x;
                // counter = i ;
            }
        }

        cout << max << endl ;
    }
    return 0;
}