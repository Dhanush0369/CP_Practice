#include<bits/stdc++.h>
#define int long long

using namespace std;

int f(int n,unordered_map<int,int>& dp){
    if(n==1) return 0;

    if(dp.find(n)!=dp.end()) return dp[n];

    int ans=0;
    ans = f(n/2,dp)+f((n+1)/2,dp)+n;

    return dp[n]=ans;
}

signed main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    int n;
    cin>>n;
    unordered_map<int,int> dp;
    cout<<f(n,dp)<<endl;

    return 0;
}