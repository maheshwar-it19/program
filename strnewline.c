#include <stdio.h> 
#include<string.h>
void main() {
    char a[10];
    int b=0;
    printf("enter a string : ");
    scanf("%s",a);
    for(;b<strlen(a);b++)
    printf("%c\n",a[b]);
}
