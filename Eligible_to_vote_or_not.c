//Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
//(Age 18 and above is eligible for casting their vote)

#include<stdio.h>
int  main(){
    int num;
    scanf("%d",&num);
    if(num>=18){
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else{
        printf("Sorry, You are not eligible to cast your vote.");
    }
    return 0;
}
