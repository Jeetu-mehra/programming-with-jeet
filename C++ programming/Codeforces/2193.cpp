//2193A DBMB and the Array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,s,x;
//         cin>>n>>s>>x;
//         vector<int> a(n);
//         int sum=0;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             sum+=a[i];
//         }
//         if(s>=sum && (s-sum)%x==0) cout<<"YES";
//         else cout<<"NO";
//         cout<<endl;        
//     }
//     return 0;
// }








//2193B Reverse a Permutation

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         vector<int> p(n);
//         for(int i=0;i<n;i++){
//             cin>>p[i];
//         }
//         int i=0,j=n-1;
//         while(i<n){
//             if(p[i]==n-i){
//                 i++;
//             }
//             else break;
//         }
//         while(j>i){
//             if(p[j]!=n-i){
//                 j--;
//             }
//             else break;
//         }
//         reverse(p.begin()+i,p.begin()+j+1);
//         for(int i=0;i<n;i++){
//             cout<<p[i]<<" ";
//         }        
//         cout<<endl;        
//     }
//     return 0;
// }






//2193C - Replace and Sum

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,q;
//         cin>>n>>q;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){   
//             cin>>a[i];
//         }
//         vector<int> b(n);
//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         a[n-1]=max(a[n-1],b[n-1]);
//         for(int i=n-2;i>=0;i--){
//             a[i]=max(a[i],max(a[i+1],b[i]));
//         }
//         int pre=0;
//         for(int i=0;i<n;i++){
//             pre+=a[i];
//             a[i]=pre;            
//         }
//         while(q--){
//             int l,r;
//             cin>>l>>r;
//             cout<<a[r-1]-((l-2)>=0?a[l-2]:0)<<endl;
//         }
//     }
//     return 0;
// }







//2193D - Monster Game