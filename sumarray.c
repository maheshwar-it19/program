#include <stdio.h>

int main()
{
   int i,a[30],sum=0;
   printf("enter array value:");
   scanf("%d",&i);
   for(int b=0;b<i;b++)
   {
       printf("enter the value:");
       scanf("%d",&a[b]);
       sum+=a[b];
   }
   printf("the sum is %d",sum);
   return 0;
}
