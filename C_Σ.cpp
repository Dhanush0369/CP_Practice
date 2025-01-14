#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    int n,k;
    cin>>n>>k;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int sum=(k*(k+1))/2;
    for(auto v:s){
        if(v>k) break;
        sum-=v;
    }

    cout<<sum;

    return 0;
}