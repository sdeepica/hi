#include<stdio.h>
#include<string.h>
void main()
{
char ch[20];
printf("enter the string:");
gets(ch);
printf("the reverse of string is:%s",strrev(ch));
}
