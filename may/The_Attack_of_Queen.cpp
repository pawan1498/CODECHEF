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
        int x, y;
        cin >> x >> y;

        int ll = min(x-1, y-1);
        int lu = min(n-x, n-y);
        int rl= min(y-1, n-x);
        int ru= min(n-y, x-1);
        int res = ll + lu + ru + rl ; 

        cout << res+ (n-1)*2<<endl;
    }
}