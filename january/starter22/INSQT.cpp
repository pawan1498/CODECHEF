#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, i, count = 0;
        cin >> k;
        int n = k;
        if (k & 1)
        {
            cout << "0"<<endl;
        }
        else
        {
            if (!(n & (n - 1)))
            {
                while (n)
                {
                    count++;
                    n = n >> 1;
                }
                cout << count-1 <<endl;
            }
            else{
                cout << "1"<<endl;
            }
        }
    }
}