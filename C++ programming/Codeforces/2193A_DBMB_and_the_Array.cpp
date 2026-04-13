#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(s>=sum && (s-sum)%x==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;        
    }
    return 0;
}