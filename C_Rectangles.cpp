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

struct rect {
    int x1,y1,x2,y2;
};

rect cross(rect a,rect b){
    rect ans;
    ans.x1 = max(a.x1,b.x1);
    ans.y1 = max(a.y1,b.y1);
    ans.x2 = min(a.x2,b.x2);
    ans.y2 = min(a.y2,b.y2);

    return ans;
}

bool check(rect a){
    if(a.x1<=a.x2 && a.y1<=a.y2){
        return 1;
    }
    return 0;
}

signed main() {
    fast_io();
    int n;cin>>n;
    vector<rect> a(n),b(n);

    f(i,n){
        cin>>a[i].x1>>a[i].y1>>a[i].x2>>a[i].y2;
    }

    rect curr = a[0];

    fa(i,0,n-1){
        curr = cross(curr,a[i]);
    }

    if(check(curr)){
        cout<<curr.x1<<" "<<curr.y1;
        return 0;
    }

    b[n-1]=a[n-1];
    rfa(i,n-2,0){
        b[i]=cross(a[i],b[i+1]);
    }

    if(check(b[1])){
        cout<<b[1].x1<<" "<<b[1].y1;
        return 0;
    }

    curr = a[0];

    fa(i,1,n-1){
        rect tem = cross(curr,b[i+1]);
        if(check(tem)){
            cout<<tem.x1<<" "<<tem.y1;
            return 0;
        }
        curr= cross (curr,a[i]);
    }

    return 0;
}
