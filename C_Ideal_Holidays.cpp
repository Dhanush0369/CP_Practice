#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    int n,a,b;
    cin>>n>>a>>b;
    set<int> arr;
    int t=a+b;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.insert(x%t);
    }

    int x;
    bool wait=true,greater=true;
    for(auto v:arr){
        if(wait){
            x=v;
            wait=false;
            continue;
        }
        if(v-x <= b){
            greater=false;
            break;
        }
        x=v;
    }

    if(greater) cout<<"Yes";
    else cout<<"No";
    return 0;
}