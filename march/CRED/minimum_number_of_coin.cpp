#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n>>x;

        int res = 0;

        if (!(n % 3))
        {
            res = n/3;
            res = res*2 *x;
            cout << res << endl ; 
        }
        else {
            res = n/3*2; 
            int remainder = n %3 ; 
            res = res + remainder;
            cout << res*x << endl ; 
        }
    }
}