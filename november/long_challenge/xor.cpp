#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll neg = -1, pos = -1;
        ll x = 0;
        while (neg != 0 || pos != 0)
        {
            neg = a[0] - x;
            pos = a[0] + x;

            for (ll i = 1; i < n; i++)
            {
                pos = (pos ^ (a[i] + x));
                neg = (neg ^ (a[i] - x));
            }
            if (pos == 0)
            {
                cout << x << "\n";
                break;
            }

            if (neg == 0)
            {
                cout << ":" << x << "\n";

                cout << -1 << "\n";
                break;
            }
            x++;
        }
    }
    return 0;
}