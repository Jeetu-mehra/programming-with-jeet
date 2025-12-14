//57)program to read N Nos and findout max and second max.
// #include<stdio.h>
// int main()
// {
//     int i,N,max,secondmax;
//     printf("Enter The value of N: ");
//     scanf("%d",&N);
//     int arr[N];
//     printf("Enter the Elements in array: ");
//     for(i=0;i<N;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<N;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     max=arr[0];
//     for(i=0;i<N;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     secondmax=arr[0];
//     for(i=0;i<N;i++)
//     {
//         if(arr[i]<max && arr[i]>secondmax)
//         {
//             secondmax=arr[i];
//         }
//     }

//     printf("\n The max no. is: %d",max);
//     printf("\n The second-max no. is: %d",secondmax);
// }



#include<stdio.h>
int main()
{
    int i,n[10],temp;
    printf("Enter any 10 numbers: ");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("The entered numbers are: ");
    for(i=1;i<=10;i++)
    {
        printf("%d \t",n[i]);
    }
    for(i=1;i<10;i++){
        if(n[i]>n[i+1])
        {
            temp=n[i];
            n[i]=n[i+1];
            n[i+1]=temp;
        }
    }
    printf("\n The sorted series is: ");
    for(i=1;i<=10;i++)
    {
        printf("%d \t",n[i]);
    }
}