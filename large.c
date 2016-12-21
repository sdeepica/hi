#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is the largest");
if(b>a && b>c)
printf("b is the largest");
if(c>a && c>b)
printf("c is the largest");
}
