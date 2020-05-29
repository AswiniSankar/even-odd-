#include<stdio.h>
#include<stdlib.h>
int main()
{
  int s,e,i,c;
  while(1)
 {
  printf("\n1.to print odd number\n2.exit\nenter your choice\n");
  scanf("%d",&c);
  switch(c)
  {
     case 1:
     printf("\nenter the start and en limit to print odd number\n");
     scanf("%d%d",&s,&e);
     for(i=s;i<=e;i++)
     {
      if(i%2!=0)
        printf("%d ",i);
     }
     printf("\n");
     break;
     case 2:exit(1);
     printf("\n");
     default:printf("\nINVALID OPTION\n");
  }
 }
  return 0;
}
