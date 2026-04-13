
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int i=0,j=n-1;
        while(i<n){
            if(p[i]==n-i){
                i++;
            }
            else break;
        }
        while(j>i){
            if(p[j]!=n-i){
                j--;
            }
            else break;
        }
        reverse(p.begin()+i,p.begin()+j+1);
        for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
        }        
        cout<<endl;        
    }
    return 0;
}

