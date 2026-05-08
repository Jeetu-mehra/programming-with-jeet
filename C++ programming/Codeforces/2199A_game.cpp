#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        int a=a1+a2;
        int b=b1+b2;
        if(a<b+k) cout<<"YES\n";
        else if(a==b+k && b1>a1 && b2>a2) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}


//Koltin code

// import java.util.*

// fun main() {
//     val sc = Scanner(System.`in`)
    
//     val t = sc.nextInt()

//     repeat(t) {
//         val k = sc.nextInt()

//         val a1 = sc.nextInt()
//         val b1 = sc.nextInt()
//         val a2 = sc.nextInt()
//         val b2 = sc.nextInt()

//         val a = a1 + a2
//         val b = b1 + b2

//         if (a < b + k) {
//             println("YES")
//         } else if (a == b + k && b1 > a1 && b2 > a2) {
//             println("YES")
//         } else {
//             println("NO")
//         }
//     }
// }