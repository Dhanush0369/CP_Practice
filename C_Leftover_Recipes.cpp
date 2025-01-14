#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,cnt=0;
    cin>>n;
    int q[n],a[n],b[n],a1[n],b1[n];

    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        int ans=0,x=0,y=0;
        bool one=true,two=true;
        while(one || two){
            if(q[i]-a[i]>=0){
                q[i]-=a[i];
                x++;
            }else{
                one=false;
            }
            if(q[i]-b[i]>=0){
                q[i]-=b[i];
                y++;
            }else{
                two=false;
            }
        }
        a1[i]=x;
        b1[i]=y;
    }
    int ans1=0,ans2=0;
    for(int i=0;i<n;i++){
        ans1=min(ans1,a1[i]);
        ans2=min(ans2,b1[i]);
        cout<<a1[i]<<" "<<b1[i]<<endl;
    }

    // cout<<ans1+ans2<<endl;
    
}

int main(){
    solve();

    return 0;
}