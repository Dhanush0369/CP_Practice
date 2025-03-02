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
    string t;cin>>t;
    map<char,int> m;
    char st=t[0];
    int ans=0,tem=0;
    f(i,n){
        if(m.find(t[i])!=m.end()){
            if(st==t[i]){
                tem++;
                if(tem>m[t[i]]){
                    m[t[i]]=tem;
                    ans++;
                }  
            }else{
                tem=1;
                st=t[i];
            }   
        }else{
            if(st==t[i]){
                m[t[i]]++;
                tem++;
                ans++;
            }else{
                tem=1;
                st=t[i];
                m[t[i]]++;
                ans++;
            }
        }
        // cout<<tem<<" ";
    }

    cout<<ans;

    return 0;
}
