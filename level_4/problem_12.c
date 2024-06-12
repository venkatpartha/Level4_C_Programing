//get a number from the user and print the reverse of it.
#include<stdio.h>
int main()
{
int x,y;
printf("Enter a three digit number: ");
scanf("%d",&x);
y=0;
while(x>0)
{
	y=y*10+x%10;
	x=x/10;
}
printf("The reverse of entered number is %d\n",y);
}
