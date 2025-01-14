#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    set<string> mp;

    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string t= s.substr(i,j-i+1);
            mp.insert(t);
        }
    }
    cout<<mp.size();

    return 0;
}