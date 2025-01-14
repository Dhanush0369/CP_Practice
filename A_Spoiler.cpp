#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int st=-1,en=-1;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='|'){
            if(st==-1) st=i;
            else en=i;
        }
    }

    s.erase(st,en-st+1);

    cout<<s;

    return 0;
}