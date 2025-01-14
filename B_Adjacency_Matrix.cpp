#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> a;
    a.resize(n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            if(x==1){
                a[i].push_back(j);
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(auto v:a[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}