#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dsa, toc, dm;    // DRAGON
        int dsa2, toc2, dm2; //SLOTH
        cin >> dsa >> toc >> dm;
        cin >> dsa2 >> toc2 >> dm2;
        int total = dsa + toc + dm;
        int total2 = dsa2 + toc2 + dm2;
        if (total > total2)
        {
            cout << "DRAGON" << endl;
        }
        else if (total == total2)
        {
            if (dsa > dsa2)
                cout << "DRAGON" << endl;

            else if (dsa == dsa2)
            {
                if (toc > toc2)
                    cout << "DRAGON" << endl;
                else if (toc == toc2)
                {
                    if (dm > dm2)
                        cout << "DRAGON" << endl;
                    else if (dm == dm2)
                        cout << "TIE" << endl;
                    else
                        cout << "SLOTH" << endl;
                }
                else
                    cout << "SLOTH" << endl;
            }
            else
                cout << "SLOTH" << endl;
        }
        else
        {
            cout << "SLOTH" << endl;
        }
    }
}
