//32) PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .

#include<stdio.h>

int main()
{
    int n,max,s_max;

    printf("Enter how many numbers you want to input :");
    scanf("%d",&n);

    if(n<=2)
    {
        printf("Try entering more values for better comparison");
    }
    else{

        int num[n];
        printf("Enter number 1:"); 
        scanf("%d",&num[0]);

        max=num[0];
        s_max=num[0]; 


        for(int i=1;i<=n-1;i++)
        {
            printf("\nEnter number %d:",i+1); 
            scanf("%d",&num[i]);

            if(num[i]>max)  
            {
                s_max = max;
                max = num[i];
                
            }
            if(num[i]<max && num[i]>s_max) 
            {
                s_max = num[i];
            }
        }
        printf("\nMax :%d",max);
        printf("\nSecond Max: %d",s_max);
}
    return 0;
}