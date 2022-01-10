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

        ll lneg = 0, lpos = 0;
        ll rneg = 0, rpos = 0;
        ll tneg = -1, tpos = -1;
        ll x = 0;
        while (1)
        {
            lneg = a[0] - x;
            rneg = 0;

            lpos = a[0] + x;
            rpos = 0;

            ll mid = (n - 1) / 2;
            for (ll i = 1; i < ((n - 1) / 2 + 1); i++)
            {
                lpos = (lpos ^ (a[i] + x));
                rpos = (rpos ^ (a[mid + 1] + x));

                lneg = (lneg ^ (a[i] - x));
                rneg = (rneg ^ (a[mid + 1] - x));
                mid++;
            }

            tpos = rpos ^ lpos;
            tneg = rneg ^ lneg;

            if (tpos == 0)
            {
                cout << x << "\n";
                break;
            }

            if (tneg == 0)
            {
                cout << "=>" << x << "\n";

                cout << -1 << "\n";
                break;
            }

            x++;
        }
    }
    return 0;
}