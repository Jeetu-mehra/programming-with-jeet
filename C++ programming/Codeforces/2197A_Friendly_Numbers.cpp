#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x;
        cin>>x;
        int ans=0;
        for(int y=x;y<=x+100;y++){
            int dsum=0;
            int num=y;
            while(num!=0){
                dsum+=num%10;
                num/=10;
            }
            if(y-dsum==x){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}