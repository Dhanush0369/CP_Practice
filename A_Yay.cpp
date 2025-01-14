#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        bool diff=true;
        for(int j=0;j<s.size();j++){
            if(i!=j && s[i]==s[j]){
                diff=false;
                break;
            }
        }
        if(diff) {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}