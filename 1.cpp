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
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// SUBSEGMENT m 1 eleemtn bhi aa skta   
//x.find(s) returns -1 if string is not present it will reutrn the first index jha se chalu ho ri x
// use s.pushback in string instead of s= s+a[i]    time complexity bdh jaati h 
 
 
 
 
 
 
 
 
 
 
return 0;
}