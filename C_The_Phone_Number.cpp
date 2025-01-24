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

int n;
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    int x = 1; while (x*x < n) x ++;
    for (int i = 0; i < n; i += x) {
        int st = i+1;
        if (i+x > n) {
            fa(I,i,n) {
                cout << n+i-I << " ";   
            }
        } else {
            fa(I,i,i+x) {
                cout << st+i+x-1-I << " ";
            }
        }
    }
}
