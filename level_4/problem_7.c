#include<stdio.h>
int main()
{
int x,y;
printf("Enter a three digit number: ");
scanf("%d",&x);
y=(x%10)*100+((x%100)/10)*10+x/100;
printf("The reverse of entered number is %d\n",y);
}
