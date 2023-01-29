#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the choice");
scanf("%d",&choice);
printf("enter a and b");
scanf("%d%d",&a,&b);
switch(choice)
{
case 1:c=a+b;
printf("%d",c);
break;
case 2:c=a-b;
printf("%d",c);
break;
case 3:c=a*b;
printf("%d",c);
break;
case 4:c=a/b;
printf("%d",c);
break;
case 5:c=a%d;
printf("%d",c);
break;
default :
printf("enter the choice between 1 and 5");
break;
}
return;
}
