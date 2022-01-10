#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long ans = 0;

        long n;
        cin >> n;
        vector<long > arr(n);
        map<long, long> mp;
        for (long i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        long max = 0;
        for (auto x : mp)
        {

            if (max < x.second)
            {
                max = x.second;
            }
        }
        if (mp.size() == 1)
            ans = 0;
        else if (mp.size() == n)
            ans = -1;
        else
        {
            
            ans =n-max+1;
        }
        cout << ans << endl;
        
    }

    return 0;
}