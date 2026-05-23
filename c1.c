#include<stdio.h>
#include<limits.h>
int main()
{
 int  n,i;
 int fact=1;
 scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(fact>INT_MAX/i)
  {
   printf("overflow occur");
   return 0;
  }
   fact=fact*i;
  }
  printf("%d",fact);
  return 0;
 }

   
   
