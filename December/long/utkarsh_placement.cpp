#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[3];
        char x, y;
        int xi, yi;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        cin >> x >> y;

        for (int i = 0; i < 3; i++)
        {
            if (x == arr[i])
            {

                xi = i;
            }
            if (y == arr[i])
            {

                yi = i;
            }
        }
        if (xi < yi)
            cout << arr[xi] << endl;
        else
            cout << arr[yi] << endl;
    }

    return 0;
}
