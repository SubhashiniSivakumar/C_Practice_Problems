// Given an integer representing the month (1 for January, 2 for February, etc.), write a program to print the number of days in that month. Do not consider leap years, so February will always have 28 days

#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);

        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
               printf("31\n");
               break;
               
            case 2:
               printf("28\n");
               break;
            case 4:
            case 6:
            case 9:
            case 11:
               printf("30\n");
               break;
            }
    return 0;
}
