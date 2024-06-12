//get a number from the user and print the sum of all digit.
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a three digit number: ");
scanf("%d",&x);
y=0;
while(x>0)
{
	y=y+x%10;
	x=x/10;
}
printf("The sum of the digits of entered number is %d\n",y);
}
