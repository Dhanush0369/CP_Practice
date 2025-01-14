#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;
    cin>>q;
    
    string to="abcdefghijklmnopqrstuvwxyz";

    while(q--){
        char a,b;
        cin>>a>>b;
        
        for(int i=0;i<26;i++){
            if(to[i]==a){
                to[i]=b;
            }
        }
        // to[a-97]=b;
    }

    for(int i=0;i<=n;i++){
        s[i]=to[s[i]-97];
    }
    

    cout<<s<<endl;
    // cout<<to;

    return 0;
}