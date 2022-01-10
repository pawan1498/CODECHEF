#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int x = 1;
        for (int i = 1; i <= d; i++)
        {
            if (x > n)
            {
                // cout << n << endl;
                break;
            }
            if (i <= 10)
            {
                x = x * 2;
            }
            else
            {
                x = 3 * x;
            }
        }
        if (x > n)
        {
            cout << n << endl;
        }
        else
            cout << x << endl;
    }
}