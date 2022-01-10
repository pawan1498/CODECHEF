#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int n = s.length();
        int count1 = 0;

        if (n == 1)
            cout << "No" << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1')
                    count1++;
            }
            if (count1)
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
    }
}