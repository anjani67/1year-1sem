#include<stdio.h>
void main()
{
int number;
printf("enter the number");
scanf("%d\n", &number);
if(number>=0)
{
printf("number is positive");
printf("%d\n",number);
}
else
{
printf("number is negative");
printf("%d\n",number);
printf("end of ifelse");
}
return;
}

