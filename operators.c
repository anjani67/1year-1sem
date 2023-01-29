#include<stdio.h>
void main()
{
int a,b;
int sum,difference,multiply,division,mod,less_than,greater_than,equal,not_equal,logical_and,logical_not,pre_increment,post_increment;
printf("enter the values of a,b");
scanf("%d%d",&a,&b);
sum=a+b;
difference=a-b;
multiply=a*b;
division=a/b;
mod=a%b;
less_than=a<b;
greater_than=a>b;
equal=(a==b);
not_equal=(a!=b);
logical_and=a&&b;
pre_increment=++a;
post_increment=a++;
printf("%d\n,%d\n,%d\n,%d\n,%d\n,%d\n,%d\n,%d\n,%d\n,%d\n,%d\n,%d\n",sum,difference,multiply,division,mod,less_than,greater_than,equal,not_equal,logical_and,pre_increment,post_increment);
return;
}

