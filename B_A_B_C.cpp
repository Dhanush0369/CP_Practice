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

    int ans=0;

    string s;cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            for(int j=i+1;j<s.size();j++){
                if(s[j]=='B'){
                    for(int k=j+1;k<s.size();k++){
                        if(s[k]=='C'){
                            if(j-i == k-j) ans++;
                        }
                    }
                }
            }
        }
    }

    cout<<ans;
    return 0;
}
