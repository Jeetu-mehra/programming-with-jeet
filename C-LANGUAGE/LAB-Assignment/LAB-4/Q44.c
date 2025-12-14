//44)  WRITE A PROGRAM IN C FOR THE FOLLOWING. AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS. 
// Consumption in unit     Rate for Charge 
//  0-200                  Re 0.50 per unit 
// 210-400                 Rs. 100 plus Re 0.65 per unit excess of 200 
// 401-600                 Rs. 230 plus Re 0.80 per unit excess of 400 
// Above 600               Rs. 425 plus Rs. 125 per unit excess of 600 
//Print the amount to be paid by the consumer.

#include<stdio.h>
int main(){
    int units;
    float charges;
    printf("Enter the unit consumption: ");
    scanf("%d",&units);
    if(units>0 && units<=200){
        charges=units*0.5;
    }
    if(units>201 && units<=400){
        charges=(100+(units-200)*0.65);
    }
    if(units>401 && units<=600){
        charges=(230+(units-400)*0.8);
    }
    if(units>600){
        charges=(425+(units-600)*1.25);
    }
    
    printf("the amount to be paid by the consumer is: %f",charges);

}