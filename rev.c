#include<stdio.h>
int main()
{
int num, sum = 0, rem, temp; printf("\nEnter a Number:\t");
scanf("%d", &num); for(temp = num; num > 0;)
{ rem = num%10;
sum = (sum*10) + rem; num = num/10;
} printf("\nReverse of %d:\t%d\n", temp, sum);
return 0;
 }
