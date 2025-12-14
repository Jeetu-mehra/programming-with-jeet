//43) WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW. 
    //  If    sales<=Rs. 500, commission is 5% 
    //  If    sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500 
    //  If    sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000 
    //  If   sales>5000, commission is 12.5% 
#include<stdio.h>
int main(){
    int sales;
    float comm;
    printf("Enter the sales amount: ");
    scanf("%d",&sales);
    if(sales<=500){
        comm=sales*(5.0/100);
    }
    if(sales>500 && sales<=2000){
        comm=(35+(sales-500)*(10.0/100));
    }
    if(sales>2000 && sales<=5000){
        comm=(185+(sales-2000)*(12.0/100));
    }
    if(sales>5000){
        comm=sales*(12.5/100);
    }
    printf("the commision is: %f",comm);

}
