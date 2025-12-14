//55)program to read an array of 10 integers and count total no. of odd and total no. of even elements.
#include<stdio.h>
int main(){
    int i, integers[10],oddn=0,evenn=0;
    printf("Enter any 10 integers: ");
    for(i=0;i<10;i++){
        scanf("%d",&integers[i]);
    }
    printf("The given integers is: ");
    for(i=0;i<10;i++){
        printf("%d\t",integers[i]);
    }
    for(i=0;i<10;i++){
        if(integers[i]%2==0){
            evenn=evenn+1;
        }
        else{
            oddn=oddn+1;
        }
    }
    printf("\n The Total no. of even elements is %d",evenn);   
    printf("\n The Total no. of odd elements is %d",oddn);   

    return 0;     
}
