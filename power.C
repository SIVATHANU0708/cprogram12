#include<stdio.h>
int main()
{
int s,p,power=1;
printf("enter the value of s:");
scanf("%d",&s);
printf("enter the power of a no p:");
scanf("%d",&p);
while(p!=0)
{
power=s*power;
--p;
}
printf("power is %d",power);
return 0;
}
