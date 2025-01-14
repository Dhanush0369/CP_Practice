#include <bits/stdc++.h>
using namespace std;

#define ll long long                    
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
#define fv(v,a) for(auto v:a)

// Shortcuts for common containers
#define vi vector<int>                   
#define vll vector<long long>            
#define si set<int>                      
#define mii map<int, int>                

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>                

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int n;
vi a;
multiset<int> p;

bool check(int mid){
    if(mid==0) return true;

    multiset<int> tem=p;

    fa(j,1,mid+1){
        tem.erase(tem.find(a[j]));
    }
    fa(j,1,mid+1){
        auto it = tem.lower_bound(2*a[j]);
        if(it==tem.end()) return false;
        else {
            tem.erase(it);
        }
    }

    return true;
}

void solve(){
    cin>>n;
    a.resize(n+1);
    fa(i,1,n+1){
        cin>>a[i];
        p.insert(a[i]);

    }


    int l=0,r=n/2,ans=0;

    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid)){
            l=mid+1;
            ans=mid;
        }else{
            r=mid-1;
        }
    }
    //  check(3);
    cout<<ans;
}

int main() {
    fast_io();

    int t=1;
    // cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
