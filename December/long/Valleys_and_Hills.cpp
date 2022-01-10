#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int str_count = 0;
        if (n == m)
        {
            str_count = 2 * m + 2;
            cout << str_count << endl;
            for (int i = 0; i < str_count; i++)
            {

                if (i % 2 == 0)
                    cout << "0";
                else
                    cout << "1";
            }
            cout << endl;
        }
        else if (n > m)
        {
            int x = n - m - 1;
            str_count = 2 * n + (n - m);
            cout << str_count << endl;

            for (int i = 0; i < (2 * n + 1); i++)
            {

                if (i % 2 == 0)
                {
                    cout << "0";
                    if (x > 0 && i != 0)
                    {
                        cout << "0";
                        x--;
                    }
                }
                else
                    cout << "1";
            }
            cout << endl;
        }
        else if (n < m)
        {
            int x = m - n - 1;
            str_count = 2 * m + (m - n);
            cout << str_count << endl;

            for (int i = 0; i < (2 * m + 1); i++)
            {

                if (i % 2 == 0)
                {
                    cout << "1";
                    if (x > 0 && i != 0)
                    {
                        cout << "1";
                        x--;
                    }
                }

                else
                    cout << "0";
            }
            cout << endl;
        }
    }

    return 0;
}