#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll XOR = 0 , ans = 0;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            XOR ^= arr[i];
        }

        while(true){
            if (XOR==0)
                break;

            if(__builtin_clzll(XOR)==0){
                ans = -1;
                break;
            }

            ll builtin  = __builtin_ctzll(XOR);
            if(builtin == 0){
                ans +=1 ;
            }
            else 
               ans += 1ll << builtin ;
            ll temp = 0; 
            for(int i=0;i<n;i++)
               temp ^= (arr[i] + ans );
               
            XOR = temp;
        }
        cout << ans << "\n";
    }
    return 0;
}