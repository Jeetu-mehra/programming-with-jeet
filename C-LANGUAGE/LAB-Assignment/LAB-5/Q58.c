// 58) PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD. 
#include<stdio.h>
int main(){
    int i, arr1[10],arr2[10],arr3[10],sum;
    printf("Enter 10 integers in first series: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter 10 integers in second series: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr2[i]);
    }
    
    printf("\n The sum of Both two arrays is: ");
    for(i=0;i<10;i++){   
    sum=arr1[i]+arr2[i];
    arr3[i]=sum;
    }
    for(i=0;i<10;i++){
    printf("\n %d",arr3[i]);
    }
    return 0;
}