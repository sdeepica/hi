#include<stdio.h>
#include<string.h>
void main()
{
char c;
int upper,lower;
printf("enter a alphabet:");
scanf("%c",&c);
lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lower||upper)
printf("%c is a vowel",c);
else
printf("%c is a consonant",c);
return 0;
}
