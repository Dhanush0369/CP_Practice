#include <bits/stdc++.h>
#define int long long
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
    string s1,s2;cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;
    int n;cin>>n;
    while(n--){
        string t1,t2;cin>>t1>>t2;
        if(t1 == s1 ||t1==s2){
            if(t1==s1){
                s1=t2;
            }else{
                s2=t2;
            }
        }else{
            if(t2==s1){
                s1=t1;
            }else{
                s2=t1;
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
}

signed main() {
    fast_io();

    int t=1;
    // cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
