#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t; 
    while (t--)
    {
        int n ; 
        cin >> n ;
        int x=-1;  
        for (int  i = 0; i < n; i++)
        {
            x = x+2;
                printf("%d ",x);
            
        }
        cout <<endl;        
    }
    
	return 0;
}
