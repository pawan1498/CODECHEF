#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int d;
        cin >> d;

        int arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }

        int x = arr[1][0] + arr[2][0] + arr[2][1];
        int y = arr[0][1] + arr[0][2] + arr[1][2];
        if (x > y)
        {
            cout << x << endl;
        }
        else
            cout << y << endl;
    }
}