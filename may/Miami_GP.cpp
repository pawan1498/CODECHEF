#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y;
        cin >> x >> y;

        float temp = 1.07 * x;
        // cout << "temp:" << temp << endl;
        if (temp >= y)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}