#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        b[i]=a[i]*a[i+1];
    }

    for(int i=0;i<n-1;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}