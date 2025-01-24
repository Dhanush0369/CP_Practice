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
    int n;cin>>n;
    string s,s1,s2,ans;cin>>s;
    vector<char> a(n);
    a[n-1]=s[n-1];
    rfa(i,n-2,0){
        a[i]=min(s[i],a[i+1]);
    }


    f(i,n){
        if(s1.size()==0 || s2.size()==0){
            if(s[i] <= a[i]){
                s1+=s[i];
                ans+='1';
            }else{
                s2+=s[i];
                ans+='2';
            }
        }else{
            if(s[i]>=s2[s2.size()-1]){
                s2+=s[i];
                ans+='2';
            }else{
                s1+=s[i];
                ans+='1';
            }
        }
    }

    
    s1 = s1+s2;

    fa(i,1,n){
        if(s1[i]<s1[i-1]){
            cout<<"-\n";
            return;
        }
    }

    cout<<ans<<endl;
}

signed main() {
    fast_io();

    int t=1;
    cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
