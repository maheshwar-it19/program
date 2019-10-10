#include<stdio.h>
void main()
{
char a;
printf("enter a character...:");
scanf("%c",&a);
if(65<=a<=90&&97<=a<=122)
printf("%c is a character",a);
else if(32<=a<=47)
printf("%c is a special character",a);
else if(48<=a<=57)
printf("%c is a digit",a);
}
