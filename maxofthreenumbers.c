#include<stdio.h>
void main()
{
int first_number;
int second_number;
int third_number;
printf("enter the first_number");
scanf("%d",&first_number);
printf("enter the second_number");
scanf("%d",&second_number);
printf("enter the third_number");
scanf("%d",&third_number);
if(first_number>second_number)
{
if(first_number>third_number)
printf("%d",first_number);
else
printf("%d",third_number);
}
else
if(second_number>third_number)
printf("%d",second_number);
else
printf("%d",third_number);
return;
}
