// 2195A Sieve of Erato67henes

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         bool x=false,y=false;
//         for(int i=0;i<n;i++) {
//             cin>>a[i];
//             if(a[i]==1) x=true;
//             if(a[i]==67) y=true;
//         }
//         if(y) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }





// 2195B Heapify 1
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin >> T;
//     while(T--){
//         int n;
//         cin >> n;

//         vector<int> a(n+1);
//         for(int i = 1; i <= n; i++){
//             cin >> a[i];
//         }

//         vector<bool> vis(n+1, false);
//         bool ok = true;

//         for(int i = 1; i <= n; i++){
//             if(vis[i]) continue;

//             vector<int> idx, val;

//             int x = i;
//             while(x <= n){
//                 vis[x] = true;
//                 idx.push_back(x);
//                 val.push_back(a[x]);
//                 x *= 2;
//             }

//             sort(idx.begin(), idx.end());
//             sort(val.begin(), val.end());

//             for(int j = 0; j < idx.size(); j++){
//                 if(val[j] != idx[j]){
//                     ok = false;
//                     break;
//                 }
//             }

//             if(!ok) break;
//         }

//         cout << (ok ? "YES\n" : "NO\n");
//     }
// }






// 2195C Dice Roll Sequence
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(a[i]+a[i+1]==7) ans++;
            if(a[i]==a[i+1]) {
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}