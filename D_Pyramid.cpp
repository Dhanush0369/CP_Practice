#include <bits/stdc++.h>
#define int long long
using namespace std;
                  
#define pb push_back                    
#define mp make_pair                     
#define all(v) v.begin(), v.end()        
#define F first                          
#define S second                         
#define endl '\n'                        

// Shortcuts for loops
#define f(i, a) for (int i = 0; i< a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          
#define rfa(i, a, b) for (int i = a; i >= b; i--)       

// Shortcuts for common containers
#define vi vector<int>                            
#define si set<int>                      
#define mii map<int, int>                

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>                

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

signed main(){
    int n;cin>>n;
    vi a(n);
    f(i,n) cin>>a[i];

    vi pre(n),suf(n);
    pre[0]=1;
    suf[n-1]=1;
    fa(i,1,n){
        if(a[i]>=pre[i-1]+1){
            pre[i]=pre[i-1]+1;
        }else{
            pre[i]= a[i];
        }
        
    }
    

    rfa(i,n-2,0){
        if(a[i]>=suf[i+1]+1){
            suf[i]=suf[i+1]+1;
        }else{
            suf[i]=a[i];
        }
        
    }
    int ans=1;
    // f(i,n){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    // f(i,n){
    //     cout<<suf[i]<<" ";
    // }

    f(i,n-1){
        if(suf[i+1]!=pre[i]){
            int tem=min(suf[i+1],pre[i]);
            ans=max(tem+1,ans);
        }else{
            ans=max(ans,pre[i]);
        }
    }

    cout<<ans;
}
