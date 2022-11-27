#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        x = 3 * x;
        y = 2 * y;
        if (x > y)
            cout << y << endl;
        else
            cout << x << endl;
    }
}