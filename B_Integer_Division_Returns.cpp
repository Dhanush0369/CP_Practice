#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll x;
    cin>>x;
    if(x<0){
        x= x/10;
    }else{
        x= (x+10-1)/10;
    }

    cout<<x;
    return 0;
}