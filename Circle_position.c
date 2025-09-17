// Write a program to determine if a point lies inside, outside, or on a circle. The circle is centered at the origin ,(0,0) with a given radius
// 𝑟. The coordinates of the point are given as 𝑥 and 𝑦.

// If the distance of the point from the origin is less than 𝑟, print "Inside".
// If the distance is equal to 𝑟, print "On the Circle".
// If the distance is greater than 𝑟, print "Outside".

#include<stdio.h>
int main(){
    int r,x,y,d,r1;
    scanf("%d\n %d %d",&r,&x,&y);
    d=x*x + y*y;
    r1=r*r;
    if(d<r1)
      printf("Inside");
    else if(d==r1)
      printf("On the Circle");
    else
      printf("Outside");
      
      return 0;
}
