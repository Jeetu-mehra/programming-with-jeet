#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]==mx) ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}