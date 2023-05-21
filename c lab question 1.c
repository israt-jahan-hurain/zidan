
#include<stdio.h>
int main()
{
int num,temp,rem,sum=0;
printf ("enter the number");
scanf("%d",&num);
if (num>0)
printf ("the number is positive");
else
printf("the number is negetive");
temp=num;
while(temp!=100)
{
    rem=temp%10;
    sum=sum*10+rem;
    temp=temp/10;
}


printf("the reverse integer = %d/n");
return 0;
}
