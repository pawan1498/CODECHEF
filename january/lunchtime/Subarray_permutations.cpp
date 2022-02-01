#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin >> n >> k;
        // cout << k << " ";

        if (n == 1 && k == 1)
            cout << "1" << endl;

        if (n != 1 && k == 1)
            cout << "-1" << endl;

        if (n != 1 && k != 1)
        {
            // for (int i = 1; i < k; i++)
            // {
            //     cout << i << " ";
            // }
            
            for (int i = 1; i <= n; i++)
            {
                if (i != k && i != n)
                    cout << i << " ";
                if (i == k)
                    cout << n << " ";
                if (i == k)
                    cout << k << " ";
                // cout << i << " ";
            }
        }
    }

    return 0;
}

