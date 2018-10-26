#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a,b,c,d,e;
	printf("mail: \n");
	scanf("%f",&a);
	b = a * 5280;
	c = 12 * b;
	d = 2.45 * c;
	e = d / 100000;
	printf("kilometre=%f",e);
	system("PAUSE");
	return 0;
}
