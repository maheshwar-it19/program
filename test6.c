#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 3 angles of the triangle...:");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
printf("it is a valid triangle");
else
printf("it is a invalid triangle");
}
