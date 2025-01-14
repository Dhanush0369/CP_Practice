#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    int n,m,k;
    cin>>n>>m>>k;
    priority_queue<int> pq;

    int x=k,y=k,i=1,j=1;

    while(x--){
        int t=n*i;
        if(t%m==0){
            i++;
        }else{
            
            pq.push(t);
            i++;
        }
        
    }
    while(y--){
        int t=m*j;
        if(t%n==0){
            j++;
        }else{
            
            pq.push(t);
            j++;
        }
        
    }
    int sz = pq.size();
    // sz-=k;

    // while(sz--){
    //     pq.pop();
    // }
    sz--;
    while(sz--){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<pq.top()<<endl;
    

    return 0;
}