#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,w;
        cin>>n>>w;
        int ans=(n/w)*(w-1)+(n%w);
        cout<<ans<<endl;        
    }
    return 0;
}