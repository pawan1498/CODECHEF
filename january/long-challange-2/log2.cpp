#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    // cout << log2(32);

    int x = log2(t);
    cout << x<<endl;

    int y = 1 << (x+1);
    cout << y<<endl;
    int check = y - t;
    cout << check;
}