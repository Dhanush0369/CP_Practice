#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]<0) {
            sum=0;
        }else{
            sum+=a[i];
        } 
    }
    cout<<sum<<endl;
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