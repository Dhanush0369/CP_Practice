#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a+b+1>9){
        cout<<a+b-1;
    }else{
        cout<<a+b+1<<endl;
    }
    

    return 0;
}