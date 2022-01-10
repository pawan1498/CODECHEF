#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        int xk, yk;
        cin >> xk >> yk;
        int xh1, yh1;
        cin >> xh1 >> yh1;
        int xh2, yh2;
        cin >> xh2 >> yh2;

        if( xk == yk ){
            
        }

        if (xk == 8)
        {
            if (yh1 == yh2)
                cout << "NO"<< endl;
            else if (xh1 == 7)
            {
                if (yh1 != yk && yh1 != yk + 1 && yh1 != yk - 1)
                {
                    if (yh2 != yk && yh2 != yk + 1 && yh2 != yk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }

            else if (xh2 == 7)
            {
                if (yh2 != yk && yh2 != yk + 1 && yh2 != yk - 1)
                {
                    if (yh1 != yk && yh1 != yk + 1 && yh1 != yk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }
            else
                cout << "NO"<< endl;
        }
        // ---------------------------------------------------------
        else if (yk == 8)
        {
            if (xh1 == xh2)
                cout << "NO"<< endl;
            else if (yh1 == 7)
            {
                if (xh1 != xk && xh1 != xk + 1 && xh1 != xk - 1)
                {
                    if (xh2 != xk && xh2 != xk + 1 && xh2 != xk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }
            else if (yh2 == 7)
            {
                if (xh2 != xk && xh2 != xk + 1 && xh2 != xk - 1)
                {
                    if (xh1 != xk && xh1 != xk + 1 && xh1 != xk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }
            else
                cout << "NO"<< endl;
        }
        // ===========================================================================================================
        else if (xk == 1)
        {
            if (yh1 == yh2)
                cout << "NO"<< endl;
            else if (xh1 == 2)
            {
                if (yh1 != xk && yh1 != xk + 1 && yh1 != xk - 1)
                {
                    if (yh2 != xk && yh2 != xk + 1 && yh2 != xk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }

            else if (xh2 == 2)
            {
                if (yh2 != yk && yh2 != yk + 1 && yh2 != yk - 1)
                {
                    if (yh1 != yk && yh1 != yk + 1 && yh1 != yk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }
            else
                cout << "NO"<< endl;
        }
        // ---------------------------------------------------------
        else if (yk == 1)
        {
            if (yh1 == yh2)
                cout << "NO"<< endl;
            else if (yh1 == 2)
            {
                if (xh1 != xk && xh1 != xk + 1 && xh1 != xk - 1)
                {
                    if (xh2 != xk && xh2 != xk + 1 && xh2 != xk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }
            else if (yh2 == 2)
            {
                if (xh2 != xk && xh2 != xk + 1 && xh2 != xk - 1)
                {
                    if (xh1 != xk && xh1 != xk + 1 && xh1 != xk - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO"<< endl;
                }
                else
                    cout << "NO"<< endl;
            }
            else
                cout << "NO"<< endl;
        }
        // ******************************************************
        else
            cout << "NO"<< endl;
    }
    return 0;
}