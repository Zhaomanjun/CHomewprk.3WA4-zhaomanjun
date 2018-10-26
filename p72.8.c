#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b;
	printf("Input the grams: g\n");
	scanf("%d",&a);
	b = 454 * a;
	printf("grams=%dg,pound=%dp",a,b);
	system("PAUSE");
	return 0;
 } 
