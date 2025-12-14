// 60) PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
#include<stdio.h>
int main(){
    int i,j,s,n;
    printf("n=");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter numbers:");
    for(int a=0;a<n;a++){
        scanf("%d",&arr1[a]);
    }
    for(s=n;s>0;s--){
        for(i=0;i<s;i++){
            j=0;
            while(arr1[i]>=arr1[j]){
                j++;
            }
            if(j==n){break;}
        }
        arr2[n-s]=arr1[i];
        for(int k=i;k<n-1;k++){
            arr1[k]=arr1[k+1];
        }
    }
    for(int a=0;a<n;a++){
        printf("%d,",arr2[a]);
    }
    return 0;
}
