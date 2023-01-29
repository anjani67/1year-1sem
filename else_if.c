#include<stdio.h>
void main()
{
int percentage;
printf("enter the percentage");
scanf("%d",&percentage);
if(percentage>=70)
{
printf("distinction");
}
else if(percentage>=60&&percentage <70)
{
printf("first class");
}
else
{
printf("fail");
}
return;
}
