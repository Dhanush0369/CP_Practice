#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;

    for(int i=0;i<2*n+1;i++){
        if(i%2==0){
            s.push_back('1');
        }else{
            s.push_back('0');
        }
    }

    cout<<s<<endl;
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