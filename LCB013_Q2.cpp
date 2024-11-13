#include <bits/stdc++.h>
#define int long long
#define sort(v) sort(v.begin(),v.end());
using namespace std;
const int M = 1e9 + 7;
int binexp(int a, int b, int m){
    int result = 1;
    while (b > 0){
        if (b & 1) result = (result * 1LL * a) % m;
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return result;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector<int> v;
        int n;
        cin >> n;
        int sum=0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
         
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
         {
        sum+=v[i];
          }

        cout<<sum-2*(v[n-2])<<endl;
    }
    
    return 0;
}









