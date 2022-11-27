#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x ; 
        if(x > 1000){
            cout << x/10<<endl ; 
        }
        else{
            cout << 100<<endl ; 
        }
    }
}