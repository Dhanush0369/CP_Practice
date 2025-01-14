#include <bits/stdc++.h>
using namespace std;

#define ll long long                   // shorthand for long long
#define pb push_back                    // shorthand for push_back
#define mp make_pair                    // shorthand for make_pair
#define all(v) v.begin(), v.end()       // shorthand for range all elements
#define F first                         // shorthand for pair.first
#define S second                        // shorthand for pair.second
#define endl '\n'                       // shorthand for newline

// Shortcuts for loops
#define f(i, a) for (int i = 0; i< a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          // loop from a to b-1
#define rfa(i, a, b) for (int i = a; i >= b; i--)        // loop from a to b (reverse)

// Shortcuts for common containers
#define vi vector<int>                  // shorthand for vector of ints
#define vll vector<long long>           // shorthand for vector of long longs
#define si set<int>                     // shorthand for set of ints
#define mii map<int, int>               // shorthand for map of int to int

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>              // shorthand for pair of ints

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int N=200010;
int p[N];
vector<int> Size(N, 0);
vector<priority_queue<int>> pq(N);

void updatePQ(int u, int v){
    while(!pq[v].empty()){
        pq[u].push(pq[v].top());
        pq[v].pop();
    }
}


int findParent(int v){
    if(p[v]==v) return v;
    return p[v]=findParent(p[v]);
}

void unionBySize(int u, int v){
    int ult_u=findParent(u);
    int ult_v=findParent(v);
    if(ult_u==ult_v) return;
    if(Size[ult_u]>=Size[ult_v]){
        Size[ult_u] += Size[ult_v];
        updatePQ(ult_u, ult_v);
        p[ult_v] = ult_u;
    }else{
        Size[ult_v] += Size[ult_u];
        updatePQ(ult_v, ult_u);
        p[ult_u] = ult_v;
    }
}


void solve(){
    int n, q;
    cin>>n>>q;
    for(int i=1; i<=n; i++){
        p[i]=i;
        Size[i]=1;
    }
    for(int i=1; i<=n; i++){
        pq[i].push(i);
    }
    vi res;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int u, v;
            cin>>u>>v;
            unionBySize(u, v);
        }else{
            int v, k;
            cin>>v>>k;
            int s=k;
            int baap = findParent(v);
            vector<int> temp;
            while(!pq[baap].empty() && k){
                temp.push_back(pq[baap].top());
                pq[baap].pop();
                k--;
            }
            res.push_back((temp.size()==s)?temp.back():-1);
            for(int i=0; i<temp.size(); i++){
                pq[baap].push(temp[i]);
            }   
        }
    }
    for(auto v:res) cout<<v<<endl;
}

int main() {
    fast_io();

    int t=1;
    //cin >> t;                           // Input number of test cases
    while (t--) {
        solve();
    }

    return 0;
}
