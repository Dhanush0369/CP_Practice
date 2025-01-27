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

bool check(vi a){

    fa(i,1,n-1){
        if(a[i]*a[i] != a[i-1]*a[i+1]){
            return false;
        }
    }
    return true;
}


signed main() {
    fast_io();
    cin>>n;
    if(n==2){
        cout<<"Yes";
        return 0;
    }

    vi a(n);

    f(i,n) {
        cin>>a[i];
    }

    
    if(check(a)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    

    return 0;
}
