#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],q,p[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        p[a[i]]=i;
    }
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(p[a]<p[b]) cout<<a<<endl;
        else cout<<b<<endl;
    }
    return 0;
}