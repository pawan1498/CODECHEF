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
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        // int count = 0;
        map<pair<int, int>, int> mp;

        for (int i = 1; i <= n; i++)
        {
            int temp = arr[i];
            int x = i - arr[i];
            int y = arr[i];
            if (x < 1)
                x = 1;
            while (temp--)
            {
                if (i == 3)
                {
                    cout << "ppaoa";
                    

                    cout << x << " " << y << endl;
                }
                // cout << "arr[i]" << arr[i] << endl;

                if (x > i || y > n)
                    break;

                mp[{x, y}] = arr[i];
                x++;
                y++;
            }
        }

        for (auto x : mp)
            cout << x.first.first << " " << x.first.second << "->" << x.second << endl;

        cout << mp.size();
        cout << endl;
        // cout << endl;
    }
}