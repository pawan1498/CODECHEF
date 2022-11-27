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
        if ((x == y && x != 0) && (x >= 1 || y >= 1))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO"<<endl;
    }
}