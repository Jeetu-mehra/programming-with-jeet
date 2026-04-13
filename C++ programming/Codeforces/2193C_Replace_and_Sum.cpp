#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++){   
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        a[n-1]=max(a[n-1],b[n-1]);
        for(int i=n-2;i>=0;i--){
            a[i]=max(a[i],max(a[i+1],b[i]));
        }
        int pre=0;
        for(int i=0;i<n;i++){
            pre+=a[i];
            a[i]=pre;            
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<a[r-1]-((l-2)>=0?a[l-2]:0)<<endl;
        }
    }
    return 0;
}

