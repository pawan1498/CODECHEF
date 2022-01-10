#include <iostream>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int check;
        int count_pos = 0;
        int count_neg = 0;
        int count_adj = 0;
        for (int i = 0; i < n; i++)
        {

            check = arr[i] % 3;
            // cout << " check " << check << endl;
            if (check == 0)
            {
                count_adj = arr[i] + count_adj;
            }
            else if (check == 1)
            {
                count_neg++;
            }
            else
            {
                count_pos++;
            }
        }

        // cout << " count_pos = " << count_pos << endl;
        // cout << " count_neg = " << count_neg << endl;
        // cout << " count_adj = " << count_adj << endl;

        int x = count_pos - count_neg;
        // int y = count_pos + count_neg;
        // cout << x << endl;
        if (x == 0)
        {
            cout << count_pos << endl;
        }
        else if (x > 0)
        {
            if (x % 3 == 0 && count_adj >= x)
            {

                cout << count_pos << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            if (x % 3 == 0)
            {
                cout << count_neg << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
