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
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vector<vi> a(n,vi(m));

    f(i,n){
        f(j,m) cin>>a[i][j];
    }
    vi sum1(n),sum2(m);
    f(i,n){
        f(j,m) {
            sum1[i]+=a[i][j];
            sum2[j]+=a[i][j];
        }
    }
    int i=0,j=0;

    for(auto v:s){
        if(v=='D'){
            a[i][j]=0-sum1[i];
            sum2[j]+=a[i][j];
            i++;
        }else{
            a[i][j]=0-sum2[j];
            sum1[i]+=a[i][j];
            j++;    a[n-1][m-1]= 0-sum1[i];

    // int fin=0;

    // f(i,n){
    //     f(j,m) {
    //         fin+=a[i][j];
    //     }
    // }
    // cout<<fin;
    // f(i,n){
    //     f(j,m) {
    //         fin+=a[i][j];
    //     }
    // }
    // cout<<fin;

    f(i,n){
        f(j,m) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
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
