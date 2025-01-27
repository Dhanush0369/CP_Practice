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


int n;
vi arr;
set<int> ans;

void rec(int i,vector<int>& a){
    if(i==n) return;

    int tem=a[0];

    fa(j,1,n){
        tem^=a[j];
        
    }
    ans.insert(tem);

    rec(i+1,a);
    
    f(j,n){
        int add=a[i];
        if(j!=i){
            a[j]+=add;
            a[i]-=add;
            rec(i+1,a);
            a[j]-=add;
            a[i]+=add;
        }
    }
}

signed main() {
    fast_io();
    
    cin>>n;
    arr.resize(n);

    f(i,n) cin>>arr[i];

    rec(0,arr);


    cout<<ans.size();
    return 0;
}
