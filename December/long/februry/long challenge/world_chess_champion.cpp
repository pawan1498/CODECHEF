#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int c_count = 0; //carlsen
        int n_count = 0; // chef
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'C')
                c_count++;
            else if (s[i] == 'N')
                n_count++;
        }

        // cout << c_count <<endl ; 
        // cout << n_count <<endl;

        if (n_count > c_count) // carlsen loss
            cout << (40 * x)<< endl;
        else if (n_count < c_count) // carlsen win
            cout << (60 * x)<< endl;
        else if (n_count == c_count)
        {
            cout << (55 * x)<< endl;
        }
    }

    return 0;
}