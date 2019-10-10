#include<stdio.h>
int main()
{
  int i,a[30],max,b,c;
  printf("enter array value:");
  scanf("%d",&i);
  for(b=0;b<i;b++)
  {
      printf("enter the value:");
      scanf("%d",&a[b]);
  }
  max = a[0];
for (c=1;c<i;c++)
{
  if (a[c]>max)
  {
     max=a[c];
  }
}
printf("it's value is %d.\n",max);
  return 0;
}
