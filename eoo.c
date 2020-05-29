/*
19
EVEN : 0  ODD : 2
20
EVEN : 2  ODD : 0
*/
#include<stdio.h>
int main()
{
 int n,rem,counte=0,counto=0,i;
 scanf("%d",&n);
 while(n)
 {
   rem=n%10;
   if(rem%2==0)
      counte++;
   else
     counto++;
   n=n/10;
 }
 printf("EVEN : %d  ODD : %d",counte,counto);
 printf("\n");
}
