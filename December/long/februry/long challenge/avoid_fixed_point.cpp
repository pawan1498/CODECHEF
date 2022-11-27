#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;

        for (auto i = 1; i <= n; i++)
        {
            int x ; 
            cin >> x;
            arr.push_back(x);
        }




        int count = 0;
        int index = 0 ; 
        for (auto i = arr.begin(); i != arr.end(); i++)
        {
            index++;
            if( *i == index ){
                temp = *i ; 
                *i = index -1 ; 

                for()
            }
        }
        cout <<endl;
        for (auto i = arr.begin(); i != arr.end(); i++)
        {
            // index++;
            // if( *i == index ){
            //     *i = index -1 ; 
            // }
            cout << *i<< " ";
        }
        cout <<endl;

        cout << arr[1];
    }

    return 0;
}