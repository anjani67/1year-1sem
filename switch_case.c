#include<stdio.h>
void main()
{
int choice;
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("sunday");
break;
case 2:printf("weekday");
break;
case 3:printf("weekend");
break;
default:printf("enter the choice between 1 to 3");
break;
}
printf("end of choice");
return;
}

