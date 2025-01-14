#include<bits/stdc++.h>

using namespace std;

int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};

int main(){
    int n;
    cin>>n;
    char s[n][n];
    vector dis(n,vector(n,vector(n,vector(n,1e9))));
    int x1=-1,y1=-1,x2=-1,y2=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
            if(s[i][j]=='P'){
                if(x1==-1 && y1==-1){
                    x1=i;
                    y1=j;
                }else{
                    x2=i;
                    y2=j;
                }
            }
        }
    }

    queue<array<int,4>> q;
    dis[x1][y1][x2][y2]=0;
    q.push({x1,y1,x2,y2});

    while(!q.empty()){
        array<int,4> ar=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            array<int,4> nd=ar;
            nd[0]+=dx[k]; nd[1]+=dy[k];
            if(nd[0]<0 || nd[0]>=n ||nd[1]<0 || nd[1]>=n || s[nd[0]][nd[1]] =='#'){
                nd[0]=ar[0];
                nd[1]=ar[1];
            }

            nd[2]+=dx[k]; nd[3]+=dy[k];
            if(nd[2]<0 || nd[2]>=n ||nd[3]<0 || nd[3]>=n || s[nd[2]][nd[3]] =='#'){
                nd[2]=ar[2];
                nd[3]=ar[3];
            }

            

            if(dis[nd[0]][nd[1]][nd[2]][nd[3]]==1e9){
                dis[nd[0]][nd[1]][nd[2]][nd[3]] = 1+dis[ar[0]][ar[1]][ar[2]][ar[3]];
                q.push(nd);
            }
        }
    }

    double ans=1e9;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dis[i][j][i][j]!=1e9){
                ans = min(ans,dis[i][j][i][j]);
            }
        }
    }

    cout<<(ans==1e9 ? -1:ans)<<endl;

    return 0;
}