#include <stdio.h>
#include<string.h>
int main(){
    int N;
    printf("Enter no of rocks:");scanf("%d",&N);
    if(N>=1 && N<=100){
        char arr[N][100];
        int i=0,c,sum=0;
        while(i<N){
            scanf("%s",arr[i]);
            c=0;
            if(strlen(arr[i])>=0 && strlen(arr[i])<=100){
                for(int j=0;arr[i][j]!='\0';j++){
                    if(arr[i][j]>='a' && arr[i][j]<='z')c++;
                }
                if(c==strlen(arr[i]))i++;
            }
        }

        for(i=0;i<strlen(arr[0]);i++){
            c=0;
            for(int j=1;j<N;j++){
                if(strchr(arr[j],arr[0][i])!='\0')c++;
                else break;
            }
            if(c==N-1)sum++;
        }

        printf("%d",sum);
    }
    else return 0;
}