
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

	int a, b, c, d, e,f;
	//cin >> a >> b >> c >> d >> e;

	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{
					for (e = 0; e < 2; e++)
					{
						for (f = 0; f < 2; f++)
						{
							cout << a << b << c << d << e << f << "\n";
							cout << (a - (b - c - (d + e)) - f )<< "\n";
						}
					}
				}
			}
		}
	}

	return 0;
}