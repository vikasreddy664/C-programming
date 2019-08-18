#include<stdio.h>
int main() 
{
int n,rev=0,rem,i;
scanf("%d",&n);
i=n;
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;

}
printf("\n The reverse of %d is %d",i,rev);
return 0;
}

Sample Test Case:
i/p:123
O/p:The reverse of 123 is 321
