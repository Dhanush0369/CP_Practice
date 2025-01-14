#include<bits/stdc++.h>
#define int long long

using namespace std;

int n;
vector<vector<string>> bag;
string t,s;

int rec(int i,string s){
    if(i==n){
        // cout<<s<<endl;
        if(s==t) {
            cout<<"ok"<<endl;
            return 0;
        }#include<bits/stdc++.h>
#define int long long

using namespace std;

int n;
vector<vector<string>> bag;
string t,s;

int rec(int i,string s){
    if(i==n){
        // cout<<s<<endl;
        if(s==t) {
            cout<<"ok"<<endl;
            return 0;
        }
        else return 1e9;
    }

    // if(dp[i]!=-1) return dp[i];

    int ans=0;
    for(auto v:bag[i]){
        ans = min(1+rec(i+1,s+v),rec(i+1,s));
    }
    return ans;
}

signed main(){
   
    cin>>t;
    
    
    cin>>n;
    bag.resize(n);

    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            string tem;
            cin>>tem;
            bag[j].push_back(tem);
        }
    }

    cout<<rec(0,s);
        
    return 0;
}
    }

    // if(dp[i]!=-1) return dp[i];

    int ans=0;
    for(auto v:bag[i]){
        ans = min(1+rec(i+1,s+v),rec(i+1,s));
    }
    return ans;
}

signed main(){
   
    cin>>t;
    
    
    cin>>n;
    bag.resize(n);

    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            string tem;
            cin>>tem;
            bag[j].push_back(tem);
        }
    }

    cout<<rec(0,s);
        
    return 0;
}