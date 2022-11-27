#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            s += 'a' + (i % 26);
        }
        cout << s <<endl; 
    }
}