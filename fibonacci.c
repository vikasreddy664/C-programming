#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3,n;
	scanf("%d",&n);
	printf("\n%d  %d",f1,f2);
	n=n-2;
	while(n>0)
	{	
		f3=f2;
		f2=f1+f2;
		f1=f3;
		printf("  %d",f2);
		n--;
	}
return 0;
}

input:
6
output:
0 1 1 2 3 5
