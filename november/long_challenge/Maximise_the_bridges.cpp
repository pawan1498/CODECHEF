#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;cin >> t;
    while(t--){
        int n,m , c;cin >> n >> m;
        c = m;
        bool any = true;
        for(int i=0;i<n-1;i++){
            cout << i+1 << " " << i+2 << "\n";
            c--;
        }

        int start = 0;
        int end = n-1;
        int itr = start +2;

        for(int i=0;i<end ; i++){
            for (int j=0;j<=i;j++){
                if(c>0){
                    if (j==0 && itr==n-1){
                        cout << itr+1 << " " << j+1 << "\n";
                        c--;
                    }
                    else {
                        cout << j+1 << " " << itr+1 << "\n";
                        c--;
                    }
                }
            }
            itr++;
        }   

    }
	return 0;
}