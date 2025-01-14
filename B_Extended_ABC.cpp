#include<bits/stdc++.h>
#define int long long

using namespace std;

int solve(){
    string s,t="ABC";
    cin>>s;
    int n= s.size();
    
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            for(int j=i+1;j<n;j++){
                if(s[j]!='B' && s[j]!='C'){
                    cout<<"No\n";
                    return 0;
                }
            }
        }else if(s[i]=='C'){
            for(int j=i+1;j<n;j++){
                if(s[j]!='C'){
                    cout<<"No\n";
                    return 0;
                }
            }
        }
    }

    cout<<"Yes\n";
    return 0;
    
}

signed main(){
    solve();

    return 0;
}