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
    int s,x1,x2;cin>>s>>x1>>x2;
    int t1,t2,p,d;cin>>t1>>t2>>p>>d;

    int ans1 = abs(x1-x2)*t2;
    if(t1>=t2){
        cout<<ans1;
        return;
    }
    int t=0,target=x1,ans2=INT_MAX;
    while(true){
        if(p==target){
            if(target==x2){
                ans2=t;
                break;
            }else{
                target=x2;
            }
        }
        if(t>=ans1) break;

        if(d>0){
           p++;
           t+=t1;
           if(p==s){
            d=-1;
           } 
        }else{
            p--;
            t+=t1;
            if(p==0) d=1;
        } 
    }
    cout<<min(ans1,ans2);
}

int main() {
    fast_io();

    int t=1;
    // cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
