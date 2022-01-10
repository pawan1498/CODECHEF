#include <bits/stdc++.h>
using namespace std;

int evaluate(string s, int l, int r)
{
    int qPos = 0;
    int qNeg = 0;
    stack<char> ch;
    stack<char> vals;
    for (int i = l; i < r; i++)
    {
        if (s[i] == '(' || s[i] == '-' || s[i] == '+')
            ch.push(s[i]);

        else if (s[i] == '?')
            vals.push('?');

        else if (s[i] == ')')
        {
            int Posq = 0;
            int Negq = 0;

            while (!ch.top() == '(')
            {
                if (ch.top() == '-')
                {
                    Posq++;
                    Negq++;
                }
                else
                    Posq += 2;
                ch.pop();
                vals.pop();
            }
            ch.pop();

            if (ch.top() == '-')
            {
                qPos += Negq;
                vals.pop();
                ch.pop();
            }
            else if (ch.top() == '+')
            {
                qPos += Posq;
                vals.pop();
                ch.pop();
            }
            else if (ch.top() == '(')
                ch.pop();
        }
    }
    while (!vals.empty())
    {
        qPos++;
        vals.pop();
    }
    return qPos;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int q;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int L, R;
            cin >> L >> R;
            cout << evaluate(s, L - 1, R) << ' ';
        }
        cout << '\n';
    }
    return 0;
}