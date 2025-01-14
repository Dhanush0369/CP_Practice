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
 
string s;
map<char,int> p;
vector<vi> dp(5010,vi(4,-1));
 
// my code
// int rec(int i,int pos){
//     if(i==s.size()) return 0;
//     int ans=0;
 
//     if(dp[i][pos]!=-1) return dp[i][pos];
 
//     if(pos==0){
//         ans = max(1+rec(i+1,p[s[i]]),rec(i+1,pos));
//     }else{
//         if(p[s[i]]==pos || p[s[i]]==pos-2){
//             ans = 1+rec(i+1,pos);
//         }else{
//             if(pos==1){
//                 ans = max(1+rec(i+1,pos+1),rec(i+1,pos));
//             }else if(pos==2){
//                 ans = max(1+rec(i+1,pos+1),rec(i+1,pos));
//             }else{
//                 ans = rec(i+1,pos);
//             }
//         }
//     }
 
//     return dp[i][pos] =ans;
// }
 
// void solve(){
//     cin>>s;
//     p['a']=1;
//     p['b']=2;
//     int ans=rec(0,0);
//     // f(i,s.size()){
//     //     cout<<dp[i][2]<<endl;
//     // }
//     cout<<ans;
// }
 
//according to tutorial
 
void solve(){
    cin>>s;
    int n=s.size();
    vi a(n+1),b(n+1);
    f(i,n){
        if(s[i]=='a') a[i+1]++;
        else b[i+1]++;
    }
    fa(i,1,n+1){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    int ans=0;
    f(i,n+1){
        fa(j,i,n+1){
            ans = max(ans,a[i]+b[j]-b[i]+a[n]-a[j]);
        }
    }
    cout<<ans;
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