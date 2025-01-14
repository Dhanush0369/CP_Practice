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
    string s,c;
    cin >> s >> c;
    int n=s.size(), m = c.size();
    bool ans = false;
    f(i, min(m, n)){

        if(s[i] >= c[i]){
            fa(j, i+1, s.size()){
                if(s[j]<c[i]){
                    swap(s[i], s[j]);
                    ans=true;
                    break;
                }
            }
            if(ans==false && s[i]!=c[i]){
                cout << "---"<<endl;
                return;
            }
        }else if(s[i] < c[i]){
            ans = true;
        }

        if(ans) break;
    }

    if(ans){
        cout << s <<endl;
    }else{
        if(n >= m){
            cout << "---" <<endl;
        }else{
            cout << s <<endl;
        }
    }
}

int main() {
    fast_io();

    int t=1;
    cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
