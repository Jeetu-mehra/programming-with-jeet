#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int>a(n);
        bool x=false,y=false;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]==1) x=true;
            if(a[i]==67) y=true;
        }
        if(y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}