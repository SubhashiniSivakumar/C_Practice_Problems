// Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
// The height of the person is
// below 150                          - Dwarf
// 150.0  <= height < 165.0    - Average height
// 165.0 <= height <= 195.0   - Taller
// above 195.0                         -  Abnormal height

#include<stdio.h>
int main(){
    float num;
    scanf("%f",&num);
    if(num<150)
       printf("The person is Dwarf.");
    else if(num>=150.0 && num<165.0)
       printf("The person is of Average height.");
    else if(num>=165.0 && num<=195.0)
       printf("The Person is Taller.");
    else
       printf("The person is Abnormal height");
       
       return 0;
}
