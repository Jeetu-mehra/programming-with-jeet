// 2194A Lawn Mower

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,w;
//         cin>>n>>w;
//         int ans=(n/w)*(w-1)+(n%w);
//         cout<<ans<<endl;        
//     }
//     return 0;
// }






// 2194B Offshores

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         long long n,x,y;
//         cin>>n>>x>>y;
//         vector<long long>a(n),b(n);
//         long long t=0;
//         for(int i=0;i<n;i++) {
//             cin>>a[i];
//             b[i]=a[i]/x;
//             t+=b[i];
//         }
//         long long ans=0;
//         for(int i=0;i<n;i++){
//             long long r=1LL*(t-b[i])*y+a[i];
//             ans=max(ans,r);
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }







// 2194D Table Cut
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