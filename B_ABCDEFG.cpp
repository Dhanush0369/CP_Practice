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
    vector<char> a(50);

    a[0]='A';
    a[3]='B';
    a[4]='C';
    a[8]='D';
    a[9]='E';
    a[14]='F';
    a[23]='G';

    char st,en;
    cin>>st>>en;
    int p1,p2;

    f(i,25){
        if(a[i]==st) p1=i;
        if(a[i]==en) {
            p2=i;
        }
    }
    cout<<abs(p2-p1);
    return 0;   
}
