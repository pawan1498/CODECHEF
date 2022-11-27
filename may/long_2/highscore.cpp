#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ; cin >> n ;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << max(d, max(c, max(b, a))) << endl;
    }
    return 0 ; 
}