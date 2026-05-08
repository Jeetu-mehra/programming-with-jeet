// TLE
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> p(n),a(n);
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> pos(n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++){
                if(a[i]==p[j]) {
                    pos[i]=j;
                    break;
                }
            }
        }
        vector<int> temp=pos;
        sort(temp.begin(),temp.end());
        if(temp==pos) cout<<"YES\n";
        else cout<<"NO\n";        
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n), a(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> pos_p(n + 1);
        for (int i = 0; i < n; i++) {
            pos_p[p[i]] = i;
        }
        vector<int> pos(n);
        for (int i = 0; i < n; i++) {
            pos[i] = pos_p[a[i]];
        }
        vector<int> temp = pos;
        sort(temp.begin(), temp.end());
        if (temp == pos) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}