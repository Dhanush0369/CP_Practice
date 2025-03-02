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
    stack<char> a;
    
    string s;cin>>s;

    f(i,s.size()){
        if(s[i]==']'){
            if(a.empty() || a.top()!='['){
                cout<<"No";
                return 0;
            }else{
                a.pop();
            }
        }else if(s[i]=='>'){
            if(a.empty() || a.top()!='<'){
                cout<<"No";
                return 0;
            }else{
                a.pop();
            }
        }else if(s[i]==')'){
            if(a.empty() || a.top()!='('){
                cout<<"No";
                return 0;
            }else{
                a.pop();
            }
        }else a.push(s[i]);
    }

    if(a.empty()) cout<<"Yes";
    else cout<<"No";

    return 0;
}
