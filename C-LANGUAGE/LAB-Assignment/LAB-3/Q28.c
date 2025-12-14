//28) program to check whether a no. is Armstrong or not. 
#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,sum=0,orig_num,count=0; 

    printf("Enter the number to check whether it's an armstrong number or not:");
    scanf("%d",&num);

    orig_num = num; 

        while(num>=1) 
    {
        num/=10;
        count++;
    }
    num = orig_num;  
      while(num!=0)
    {
        temp = num%10;
        sum = sum + pow(temp,count);
        num = num/10;
    }

    if(orig_num == sum)
    {
        printf("The number %d is a Armstrong Number!!",orig_num);
    }
    else
    {
        printf("The number %d is a not Armstrong Number!!",orig_num);
    }
}
