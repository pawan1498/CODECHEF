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
        string s;
        cin >> s;

        ll q;
        cin >> q;

        while (q--)
        {
            ll ans = 0;
            ll l, r;
            cin >> l >> r;
            string sub = s.substr(l-1, r-l+1);

            int qop = 0, op = 0;

            if (s.size() == 1)
            {
                cout << 1 << "\n";
            }
            else
            {
                for (ll i = 0; i < sub.size(); i++)
                {
                    if (sub[i] == '+' && (sub[i - 1] == ')' || sub[i + 1] == '('))
                    {
                        if (op == 1){
                        op = 1;
                        }

                        if (op == 0){
                            op = 0;
                        }
                    }

                    if (sub[i] == '-' && (sub[i - 1] == ')' || sub[i + 1] == '('))
                    {
                        if (op == 1){
                            op = 0;
                        }

                        if (op == 0){
                            op = 1;
                        }
                    }

                    if (sub[i] == '?')
                    {
                        if (sub[i - 1] == '(' || sub[i - 1] == '+')
                        {
                            qop = 0;
                        }

                        if (sub[i - 1] == '-')
                        {
                            qop = 1;
                        }

                        if (op == 0 && qop == 0)
                        {
                            ans = ans + 1;
                        }

                        if (op == 1 && qop == 1)
                        {
                            ans = ans + 1;
                        }
                    }
                }
                cout << ans << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

