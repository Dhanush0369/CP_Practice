#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    int n,m,l;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];

    cin>>l;
    int c[l];
    for(int i=0;i<l;i++) cin>>c[i];

    int q;
    cin>>q;
    int x[q];
    for(int i=0;i<q;i++) cin>>x[i];

    vector<int> final;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<l;k++){
                final.push_back(a[i]+b[j]+c[k]);
            }
        }
    }
    int f=final.size();

    sort(final.begin(),final.end());
    // for(auto v:final){
    //     cout<<v<<" ";
    // }
    cout<<endl;

    for(int i=0;i<q;i++){
        // if(x[i]<final[0] || x[i]>final[f-1]) {
        //     cout<<"No"<<endl;
        //     continue;
        // }

        // int l=0,r=f-1,ans=-1;

        // while(l<=r){
        //     int mid=(l+r)/2;

        //     if(final[mid]<=x[i]){
        //         ans=mid;
        //         l=mid+1;
        //     }else r=mid-1;
        // }
        int ans=lower_bound(final.begin(),final.end(),x[i])-final.begin();
        // cout<<final[ans]<<endl;

        if(final[ans]==x[i]) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}