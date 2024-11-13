// codefrce alice and bob 
// jckjk
#include<bits/stdc++.h>
using namespace std;
#define int long long
double distance(double x1,double y1,double x2,double y2){
    double p1 = x1-x2;
    double p2 = y1-y2;
    double j = (p1*p1)+(p2*p2);
    double k = sqrt(j);
    
    return k;
}
void printvec(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int> prefixSum(vector<int>v){
    vector<int>sum(v.size(),0);
    sum[0]=v[0];
    for(int i=1;i<v.size();i++){
        sum[i]=sum[i-1]+v[i];
    }
    return sum;
}
signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    
    }
    return 0;

    // hello 
}