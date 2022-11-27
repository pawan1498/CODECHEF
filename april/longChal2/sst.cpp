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
        x = x * 10;
        y = (y * 10/2);
        if (x > y)
            cout << "FIRST" << endl;
        else if (x == y)
            cout << "ANY" << endl;
        else
            cout << "SECOND" << endl;
    }
}