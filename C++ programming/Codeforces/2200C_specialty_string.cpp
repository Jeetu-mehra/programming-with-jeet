#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        while(true){
            int i=0;
            bool flag=false;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    s.erase(i,2);
                    flag=true;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        if(s.size()==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}   