#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int low,int mid ,int high){
	int i=low,j=mid+1,k=0;
	int b[high-low+1];
	while(i<=mid &&j<=high){
		if(a[i]>a[j]){
			b[k]=a[j];
			j++;
			k++;
		}
		else{
			b[k]=a[i];
			k++;
			i++;
		}
	}
	while(j<=high){
		b[k]=a[j];
		k++;
		j++;
	}
	while(i<=mid){
		b[k]=a[i];
		k++;
		i++;
	}
	for(i=low,j=0;i<=high;j++,i++){
		a[i]=b[j];
		 
	}
}
void mergesort(int a[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void show(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int main(){
	int n,i,j,tem;
	printf("enter your array size: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter your %d element of array: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("your array:\n");
	show(a,n);
	mergesort(a,0,n-1);
	printf("\nafter sorting array\n");
	show(a,n);
}
