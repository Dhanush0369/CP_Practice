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

int n;
vector<vector<string>> a;

bool check(int i,int j){
    if(i>n || i<=0 || j>n || j<=0 || a[i][j]!="0") return false;
    return true;
}

signed main() {
    fast_io();
    cin>>n;
    a.resize(n+1,vector<string>(n+1,"0"));
    int val=1;
    a[(n+1)/2][(n+1)/2]="T";

    vector<char> dir;
    dir.pb('R');
    dir.pb('D');
    dir.pb('L');
    dir.pb('U');
    int x=1,y=0,d=0;
    while(val<= n*n -1){
        int i=x,j=y;
        if(dir[d]=='U'){
            i--;
        }else if(dir[d]=='D'){
            i++;
        }else if(dir[d]=='R'){
            j++;
        }else{
            j--;
        }

        if(check(i,j)){
            a[i][j]=to_string(val);
            val++;
            x=i;y=j;
        }else{
            d++;
            d%=4;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
