#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n,x,y;
        cin>>n>>x>>y;
        vector<long long>a(n),b(n);
        long long t=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            b[i]=a[i]/x;
            t+=b[i];
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            long long r=1LL*(t-b[i])*y+a[i];
            ans=max(ans,r);
        }
        cout<<ans<<endl;
    }
    return 0;
}