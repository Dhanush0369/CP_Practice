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

// void solve(){
    
//     vector<bool> ok(n);
//     int x=0,y=0;

//     f(i,n){
//         int pos=-1,p=0;
//         long double dis=1e9;
//         f(j,n){
//             if(ok[j]) continue;
            
//             // cout<<(x-fro[j].F)<<" "<<(y-fro[j].S)*(y-fro[j].S)<<endl;
//             if(min(tem1,tem2)<dis){
//                 pos=j;
                
//                 if(tem1<tem2){
//                     dis=tem1;
//                     p=0;
//                 }else{
//                     dis=tem2;
//                     p=1;
//                 }
//                 // cout<<tem1<<" "<<tem2<<endl;
//                 // cout<<pos<<" "<<dis<<endl;
//             }
//         }
//         if(p==0){
//             long double tem = sqrt((x-fro[pos].F)*(x-fro[pos].F) + (y-fro[pos].S)*(y-fro[pos].S));
            
//             ans += tem/s + seg/t;
            
//             // cout<<tem/s<<" "<<seg/s<<" "<<x<<" "<<y<<endl;
//         }else{
//             long double tem =  sqrt((x-to[pos].F)*(x-to[pos].F) + (y-to[pos].S)*(y-to[pos].S));
//             long double seg = sqrt((to[pos].F-fro[pos].F)*(to[pos].F-fro[pos].F) + (to[pos].S-fro[pos].S)*(to[pos].S-fro[pos].S));
//             ans += tem/s + seg/t;
//             x=fro[pos].F;
//             y=fro[pos].S;
//             // cout<<tem/s<<" "<<seg/s<<" "<<x<<" "<<y<<endl;
//         }
//         ok[pos]=1;
//     }

    
// }

signed main() {
    fast_io();

    int n,s,t;cin>>n>>s>>t;
    vector<pii> fro(n),to(n);
    long double ans=1e9;
    f(i,n){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        
        fro[i]=(mp(x1,y1));
        to[i]=(mp(x2,y2));
    }

    vi a(n);
    f(i,n) a[i]=i;
    sort(all(a));
    do{
        long double tem=0;
        int x=0,y=0;
        for(auto v:a){
            // cout<<v<<" ";
            long double tem1 = sqrt((x-fro[v].F)*(x-fro[v].F) + (y-fro[v].S)*(y-fro[v].S));
            long double tem2 = sqrt((x-to[v].F)*(x-to[v].F) + (y-to[v].S)*(y-to[v].S));
            long double seg = sqrt((to[v].F-fro[v].F)*(to[v].F-fro[v].F) + (to[v].S-fro[v].S)*(to[v].S-fro[v].S));
            if(tem1<tem2){
                tem+= tem1/s + seg/t;
                x=to[v].F;
                y=to[v].S;
            }else{
                tem+= tem2/s + seg/t;
                x=fro[v].F;
                y=fro[v].S;
            }
        }
        // cout<<endl;
        ans = min(ans,tem);
        
    }while(next_permutation(all(a)));


    cout<<fixed<<setprecision(20)<<ans;
    return 0;
}
