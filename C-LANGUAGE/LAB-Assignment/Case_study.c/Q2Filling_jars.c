#include <stdio.h>
#include<math.h>
int main(){
    long N,M;printf("([no of jars]N,[no of operations]M):");
    scanf("%ld,%ld",&N,&M);
    if(N>=3 && N<=pow(10,7) && M>=1 &&M<=pow(10,5)){
        long i=0,j=0,a,b,k,sum=0;
        while(i<M){
            printf("a=");scanf("%ld",&a);
            printf("b=");scanf("%ld",&b);
            printf("k=");scanf("%ld",&k);
            if(b<=N && a>=1 && a<=b && k>=0 && k<=pow(10,6)){
                sum+=(b-a+1)*k;
                i++;
            }
        }
        printf("Average no of candies are %ld",sum/N);
    }
    else return 0;
}




