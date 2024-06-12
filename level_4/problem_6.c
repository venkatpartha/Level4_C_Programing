#include<stdio.h>
int main()
{
int x,y;
printf("Enter a two digit number: ");
scanf("%d",&x);
y=(x%10)*10+x/10;
printf("The reverse of entered number is %d\n",y);
}
