#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        // int s[n];

        // for (int i = 1; i <= n; i++)
        // {
        //     cin >> s[i];
        // }

        int j = n - 1, count = 0;
        for (int i = 0; i < (n / 2); i++)
        {
            if (s[i] != s[j])
            {
                count++;
            }

            j--;
        }
        // cout <<"count :" <<count << endl;

        if (count % 2 == 0)
        {
            cout << count / 2 << endl;
        }
        else
        {
            cout << count / 2 + 1 << endl;
        }

    }
    return 0;
}

// 0 0 1 1 1 0 1 0 1 0