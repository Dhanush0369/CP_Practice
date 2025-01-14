#include <bits/stdc++.h>
using namespace std;


int n;
map<int,vector<int>> da;

// void input(string s){
//     istringstream iss(s);
//     string id,date,status;
//     iss>>id>>date>>status;

//     cout<<id<<" "<<date<<" "<<status<<endl;

    

//     return;
// }

int main(){
    cin>>n;
    string id,date,status;
    

    for(int i=0;i<n;i++){
        cin>>id>>date>>status; 
        if(status == "Present"){
            int i=stoi(id);
            string tem;
            for(int j=0;j<date.size();j++){
                if(date[j]!='-'){
                    tem += date[j];
                }
            }    
            da[i].push_back(stoi(tem));
        }
    }

    

    for(auto v:da){
        int sz=v.second.size(),i=v.first,cnt=1,ans=1;
        if(sz==1) {
            cout<<i<<" "<<cnt<<endl;
            continue;
        }
        vector<int> y=v.second;
        sort(y.begin(),y.end());
        for(int x=1;x<sz;x++){
            int diff = abs(y[x]-y[x-1]);
            if(diff==1 || diff==70 || diff==71 || diff==72 || diff==8870){
                cnt++;
                ans = max(ans,cnt);
            }else{
                cnt=1;
                
            }
        }
        cout<<i<<" "<<ans<<endl;
    }

    return 0;
}