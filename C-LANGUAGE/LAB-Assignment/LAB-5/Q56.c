//56)program to read an array of 10 integers and count total no. of poitive, negative and zero elements.
#include<stdio.h>
int main(){
    int i, integers[10],positiven=0,negativen=0,zeron=0;
    printf("Enter any 10 integers: ");
    for(i=0;i<10;i++){
        scanf("%d",&integers[i]);
    }
    printf("The given integers is: ");
    for(i=0;i<10;i++){
        printf("%d\t",integers[i]);
    }
    for(i=0;i<10;i++){
        if(integers[i]>0){
            positiven=positiven+1;
        }
        else if(integers[i]<0){
            negativen=negativen+1;
        }
        else{
            zeron=zeron+1;
        }
    }
    printf("\n The Total no. of positive elements is %d",positiven);   
    printf("\n The Total no. of negative elements is %d",negativen);   
    printf("\n The Total no. of zero elements is %d",zeron);   
    
    return 0;     
}
