#include<stdio.h>
void main()
{
int number,multiply;
int constant=5;
number=1;
while(number<=10)
{
multiply=constant*number;
printf("%d*%d=%d\n",number,constant,multiply);
number=number+1;
}
return;
}
