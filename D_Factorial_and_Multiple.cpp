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

bool isprime(int x){
    for(int i=2;i*i<x;i++){
        if(x%i==0) return false;
    }
    return true;
}


signed main() {
    fast_io();

    int k;cin>>k;

    if(isprime(k)){
        cout<<k;
        return 0;
    }

    int ans=1;
    for(int i=2;i<10000000;i++){
        if(k%i==0){
            k/=i;
            ans=i;
        }
    }


    cout<<ans;
    return 0;
}
