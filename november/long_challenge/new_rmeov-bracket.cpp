    #include <bits/stdc++.h>
    #include <iostream>

    #define ll long long int
    // #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <limits.h>
    #include <cstring>

    using namespace std;

    struct LinkListNode
    {
        int data;
        struct LinkListNode *next;
    };
   
    int pushToStackAsLinkList(struct LinkListNode **top, int val)
    {

        struct LinkListNode *newNode = (struct LinkListNode *)malloc(sizeof(struct LinkListNode));
        newNode->data = val;
        newNode->next = (*top);
        *top = newNode;
        return 1;
    }
    int popFromStackAsLinkList(struct LinkListNode **top)
    {

        
        struct LinkListNode *deletedNode = (*top);
        (*top) = (*top)->next;
        int retVal = deletedNode->data;
        free(deletedNode);

        return retVal;
    }
    char *deParenthesesiationOfAlgebricExp(char *exp)
    {

        int i, j = 0;
        struct LinkListNode *stack = NULL;
        char *res = (char *)malloc(sizeof(char) * (strlen(exp) + 1));

        pushToStackAsLinkList(&stack, 0);
        for (i = 0; exp[i] != '\0'; i++)
        {

            if (exp[i] == '(' && i == 0)
            {
                ;
            }
            else if (exp[i] == '(' && i > 0)
            {

                if (exp[i - 1] == '(')
                {
                    pushToStackAsLinkList(&stack, stack->data);
                }
                else if (exp[i - 1] == '-')
                {

                    pushToStackAsLinkList(&stack, (stack->data == 1 ? 0 : 1));
                }
                else if (exp[i - 1] == '+')
                {
                    pushToStackAsLinkList(&stack, stack->data);
                }
            }
            else if (exp[i] == ')')
            {

                popFromStackAsLinkList(&stack);
            }
            else if (exp[i] == '+')
            {
                if (stack->data == 0)
                {
                    res[j++] = '+';
                }
                else
                {
                    res[j++] = '-';
                }
            }
            else if (exp[i] == '-')
            {

                if (stack->data == 0)
                {
                    res[j++] = '-';
                }
                else
                {
                    res[j++] = '+';
                }
            }
            else
            {
                res[j++] = exp[i];
            }
        }

        res[j] = '\0';
        return res;
    }
    int main()
    {
        //     ios_base::sync_with_stdio(false);
        //     cin.tie(NULL);

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

                ll n = sub.length();

                char char_array[n + 1];

                strcpy(char_array, sub.c_str());

                string sim = deParenthesesiationOfAlgebricExp(char_array);

                ll pluscount = 0;
                char ch = '+';

                for (ll i = 0; (i = sim.find(ch, i)) != std::string::npos; i++)
                {
                    pluscount++;
                }

                cout << pluscount + 1 << " ";
            }
            cout << "\n";
        }
        return 0;
    }