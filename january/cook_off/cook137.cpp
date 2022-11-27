#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t ; 
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x >= y)
            cout << "PIZZA"<<endl;
        else if (x < y && x >= z)
            cout << "BURGER"<<endl;
        else if (x < z && x < y)
            cout << "NOTHING"<<endl;
    }
    return 0;
}
