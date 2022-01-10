#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string  simplify(string str)
{
    int len = str.length();

    // resultant string of max length equal
    // to length of input string
    char res[len];
    int index = 0, i = 0;

    // create empty stack
    stack<int> s;
    s.push(0);

    while (i < len)
    {
        // Don't do any operation
        if (str[i] == '(' && i == 0)
        {
            i++;
            continue;
        }

        if (str[i] == '+')
        {

            // If top is 1, flip the operator
            if (s.top() == 1)
                res[index++] = '-';

            // If top is 0, append the same operator
            if (s.top() == 0)
                res[index++] = '+';
        }
        else if (str[i] == '-')
        {
            if (s.top() == 1)
                res[index++] = '+';
            else if (s.top() == 0)
                res[index++] = '-';
        }
        else if (str[i] == '(' && i > 0)
        {
            if (str[i - 1] == '-')
            {

                // x is opposite to the top of stack
                int x = (s.top() == 1) ? 0 : 1;
                s.push(x);
            }

            // push value equal to top of the stack
            else if (str[i - 1] == '+')
                s.push(s.top());
        }

        // If closing parentheses pop the stack once
        else if (str[i] == ')')
            s.pop();

        // copy the character to the result
        else
            res[index++] = str[i];
        i++;
    }
    return res;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        ll q;
        cin >> q;

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            string sub = s.substr(l - 1, r - l + 1);
            // cout << "\n" << sub <<"\n";
            string sim = simplify(sub);
            int pluscount = 0;
            char ch = '+';

            for (int i = 0; (i = sim.find(ch, i)) != std::string::npos; i++)
            {
                pluscount++;
            }

            cout << pluscount + 1 << " ";

        }
        cout << "\n";
    }
    return 0;
}

