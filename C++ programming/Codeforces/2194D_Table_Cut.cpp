// there are 2 parts of question, 1st part is solved and 2nd part is unsolved(the commented one)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        int c1=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]) {
                    c1++;
                    c++;
                }
                v.push_back(c);
            }
        }
        int x=c1/2;
        if(c1%2) cout<<(x)*(x+1)<<endl;
        else cout<<(x)*(x)<<endl;  
        // string ans="";
        // int i=0;
        // while(true){
        //     while(x>v[i]){
        //         ans+='D';
        //         x-=v[i];
        //         i++;
        //     }
        //     while(c1/2){
        //         ans+='R';
        //         if()
        //     }
        // }

    }
    return 0;
}