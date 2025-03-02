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

    string c;cin>>c;
    
    if(c=="N") cout<<"S";
    else if(c=="S") cout<<"N";
    else if(c=="E") cout<<"W";
    else if(c=="W") cout<<"E";
    else if(c=="NE") cout<<"SW";
    else if(c=="SE") cout<<"NW";
    else if(c=="SW") cout<<"NE";
    else if(c=="NW") cout<<"SE";

    return 0;
}
