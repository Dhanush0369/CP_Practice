#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> ans;

    bool ok=true;
    while(ok){
        int x;
        cin>>x;
        ans.push_back(x);
        if(x==0) ok=false;
    }

    reverse(ans.begin(),ans.end());
    for(auto v:ans){
        cout<<v<<endl;
    }

    return 0;
}