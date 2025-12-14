// 59) PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS.
#include<stdio.h>
int main(){
    int i, arr1[10],arr2[10],arr3[10],temp;
    printf("Enter 10 integers in first series: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter 10 integers in second series: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr2[i]);
    }
    
    for(i=0;i<10;i++){
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("The first series is: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n The second series is: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}