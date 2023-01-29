#include<math.h>
int main()
{
int p,t,r;
float ci;
printf("enter the p,t,r");
scanf("%d,%d,%d",&p,&t,&r);
ci=p*pow(1+r/100,t);
printf("compound interest is %f",ci );
return 0;
}

