// Write a program to calculate the electricity bill based on the following usage rates:
// First 100 units: INR 5 per unit
// Next 100 units: INR 7 per unit
// Units above 200: INR 10 per unit

#include<stdio.h>
int main(){
    int units,bill;
    scanf("%d",&units);
    if(units<=100)
       bill=units*5;
    else if(units<=200)
       bill=100*5 + (units-100)*7;
    else
       bill=100*5 + 100*7 + (units-200)*10;
       
    if(units>=250){
        bill=bill+150;
    }
    
    printf("%d\n",bill);   
       return 0;
}
