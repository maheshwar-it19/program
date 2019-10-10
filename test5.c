#include <stdio.h>
 
int main()
{
  int unit=0;
  int cost=0;
  printf("Enter the unit");
  scanf("%d",&unit);
 
  if(unit<=50)
  {
  cost=unit*0.50;
  cost=cost+(cost*20/100);
  printf("Electricity bill %d",cost);
  }
  if(unit>50 && unit<=150)
  {
  cost=(unit*0.75);
  cost=cost+(cost*20)/100;
  printf("Electricity bill %d",cost);
  }
  if(unit>150 && unit<=250)
  {
  cost=unit*1.20;
  cost=cost+((cost/100)*20);
  printf("Electricity bill %d",cost);
  }
  if(unit>250)
  {
  cost=unit*1.50;
  cost=cost+((cost/100)*20);
  printf("Electricity bill %d",cost);
  }
 
  return 0;
}
