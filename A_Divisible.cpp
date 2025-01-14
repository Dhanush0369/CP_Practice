#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int> ans;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        if(a[i]%k==0) ans.push_back(a[i]/k);
    }

    for(auto v:ans) cout<<v<<" ";
    

    return 0;
}