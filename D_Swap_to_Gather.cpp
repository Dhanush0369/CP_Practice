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
    string s;cin>>s;

    vi ans;

    f(i,s.size()){
        if(s[i]=='1') ans.pb(i);
    }
    if(ans.size()==1) {
        cout<<"0";
        return 0;
    }

    int m=ans.size(),cnt=0;
    int curr=m/2;
    int pos=ans[curr]-1;

    for(int i=curr-1;i>=0;i--){
        cnt+= (pos-ans[i]);
        pos--;
    }
    pos=ans[curr]+1;
    for(int i=curr+1;i<m;i++){
        cnt+= (abs(pos-ans[i]));
        pos++;
    }
    cout<<cnt;
    return 0;
}
