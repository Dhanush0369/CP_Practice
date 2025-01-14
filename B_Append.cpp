#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> ans;
    while(n--){
        int x;
        cin>>x;
        if(x==1){
            int k;
            cin>>k;
            ans.push_back(k);
        }else{
            int k;
            cin>>k;
            cout<<ans[ans.size()-k]<<endl;
        }
    }
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();

    return 0;
}