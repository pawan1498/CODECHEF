#include <bits/stdc++.h>
using namespace std;
int sol(int n, int x, int arr[])
{
    int max = 0;
    int check = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        max = max + arr[i];
        if (max >= x)
        {
            check++;
            return check;
        }
        else
        {
            check++;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << sol(n, x, arr) << endl;
    }
}
