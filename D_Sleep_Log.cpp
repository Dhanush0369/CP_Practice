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


signed main() {
    fast_io();
    int n;cin>>n;
    vi a(n);

    f(i,n) cin>>a[i];

    vector<pii> pre,suf;

    int tot=0;

    f(i,n){
        if(i>0 && i%2==0){
            tot+=a[i]-a[i-1];
        }
        pre.pb({a[i],tot});
        
    }
    int sum=0;
    rfa(i,n-1,0){
        if(i%2==1){
            sum+=a[i+1]-a[i];
        }
        suf.pb({a[i],sum});
    }

    // f(i,n){
    //     cout<<suf[i].F<<" "<<suf[i].S<<endl;
    // }
    
    reverse(all(suf));


    int q;cin>>q;

    f(i,q){
        int l,r;cin>>l>>r;

        int s1=0,s2=0;
        pii st=mp(l,0),en=mp(r,0);
        auto it = lower_bound(all(pre),st)-pre.begin();

        if(it>0 && it%2==0){
            s1=pre[it].S -(a[it]-l);
        }else{
            s1=pre[it].S;
        }

        auto it1 = lower_bound(all(suf),en)-suf.begin();

        if(it1%2==0){
            s2=suf[it1].S +(a[it1]-r);
        }else{
            s2=suf[it1].S;
        }
        // cout<<s1<<" "<<s2<<endl;
        sum = tot-s1-s2;
        cout<<sum<<endl;
    }

    return 0;
}
