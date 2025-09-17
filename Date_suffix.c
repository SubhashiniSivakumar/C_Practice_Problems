// Write a program that converts a date input (in dd/mm/yyyy format) into a full textual representation of the date. The output should include the day with the correct ordinal suffix (e.g., "1st", "2nd", "3rd"), the month name, and the year, formatted like "15th August, 2023".

#include<stdio.h>
int main(){
    int dd,mm,yyyy;
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    
    char *months[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    
    char *suffix;
    
    if(dd%10==1 && dd!=11)
       suffix="st";
    else if(dd%10==2 && dd!=12)
       suffix="nd";
    else if(dd%10==3 && dd!=13)
       suffix="rd";
    else
       suffix="th";
       
       printf("%d%s %s, %d",dd,suffix,months[mm],yyyy);
       return 0;
}
