/* 1+(1/2)+(1/3)+(1/4)+....+(1/(2^k))*/
#include<stdio.h>
int poww(int a,int b)
{
	if(b == 1)
		return a;
	if(b == 0)
		return 1;
	return (a * poww(a, b-1));
}

float count(int k)
{
	float c = 0;
	if(k == 0)
		return 1;
	else
	{
		c = c+(1.0/(float)(poww(2.0,(float)k)));
	}
	return (c + count(k-1));
}
int main()
{
	int a=4;
	float res = count(a);
	printf("res = %f\n", res);
	return 0;
}
