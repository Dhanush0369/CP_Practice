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

void solve(){
    int n,k,l;cin>>n>>k>>l;
    k*=2;
    l*=2;
    vi a(n);
    // if(a[0]==0 && l<=k){
    //     cout<<"0\n";
    //     return;
    // }

    f(i,n) {
        cin>>a[i];
        a[i]*=2;
    }
    int t=0,curr=0,add=0;
    t = a[0];

    fa(i,1,n){
        if(i*k<=a[i]){
            if(t>=a[i]-i*k){
                a[i]=i*k;
            }else{
                a[i]-=t;
            }
        }else{
            if(t>=i*k-a[i]){
                a[i]=i*k;
            }else{
                a[i]+=t;
            }
        }
    }
    curr = k;
    fa(i,1,n){
        if(a[i]==curr) curr+=k;
        else {
            int tem = (a[i]-curr+1)/2;
            if(tem<=add){
                curr=a[i]-add+k;
            }else{
                add+=tem;
                curr=a[i]-add+k;
            }
            a[i]+=tem;
        }
    }

    if(curr<l){
        int tem = l-k;
        add += tem-a[n-1];
    }

    cout<<t+add<<endl;
}

int main() {
    fast_io();

    int tt=1;
    cin >> tt;                           
    while (tt--) {
        solve();
    }

    return 0;
}
