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
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<n<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
        
    }
    return 0;
}