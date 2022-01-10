#include <bits/stdc++.h>
#define ll unsigned long long int
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
    
    ll x = 0;
    while (1)
    {
      ll XOR = a[0] + x;
      for (ll i = 1; i < n; i++)
      {
        XOR = XOR ^ (a[i] + x);
      }

      if (XOR == 0)
      {
        cout << x << "\n";
        break;
      }
      else
      {
        if (XOR == 1 || ( XOR && (!(XOR & (XOR - 1))))){
          cout << -1 << "\n";
          break;
        }

        ll temp = XOR;
        ll count = -1;
        while (temp > 0)
        {
          ll bit = temp % 2;
          temp = temp / 2;
          count++;
          if (bit == 1)
          {
            break;
          }
        }
        x = x + pow(2, count);
      }
    }
  }
  return 0;
}