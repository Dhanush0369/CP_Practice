#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int x=1;
    while(x<n){
        int s,t;
        cin>>s>>t;
        int m=a[x]/s;
        if(m>0){
            a[x]-=m*s;
            a[x+1]+=m*t;
        }
        // for(int i=1;i<=n;i++){
        //  cout<<a[i]<<" ";
        // }
        // cout<<endl;
        x++;
    }

    cout<<a[n]<<endl;
}

signed main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();

    return 0;
}