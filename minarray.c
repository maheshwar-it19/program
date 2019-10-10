#include<stdio.h>
int main()
{
  int i,a[30],min,b,c;
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
  if (a[c]<min)
  {
     min=a[c];
  }
}
printf("it's value is %d.\n",min);
  return 0;
}


