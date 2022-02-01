#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    // cout << log2(32);

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        // cout <<sum<<endl;
        // return 0 ;

        if (!(sum & (sum- 1)))
        {
            cout << "0" << endl;
        }
        else
        {
            while (sum & (sum - 1) != 0)
            {
                int x = log2(sum);
                int y = 1 << (x + 1);
                int check = y - sum;
                // cout << check;
        
            }
        }
    }
}