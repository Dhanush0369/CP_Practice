#include<bits/stdc++.h>

using namespace std;

int main(){
    int w,b;
    cin>>w>>b;

    string s="wbwbwwbwbwbw";
    // int t=20;
    // while(t--){
    //     s+=s;
    // }

    for(int i=0;i<s.size();i=i++){
        int cw=0,cb=0;
        for(int j=i;j<i+w+b;j++){
            if((s[(i+j)%12]=='w')) cw++;
            else cb++;
        }
        if(cw==w && cb==b) {
            cout<<"Yes\n";
            return 0;
        }
    }

    cout<<"No";

    return 0;
}