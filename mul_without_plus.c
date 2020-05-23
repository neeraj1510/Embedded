#include<stdio.h>
int count = -1;
int mul(int a,int b)
{
	if(b == 1)
		return a;
	if(b == 0)
		return b;
	return (a + mul(a, b-1));
}
int main()
{
	int a = 04, b=9;
	int res = mul(a,b);
	printf("res = %d\n", res);
	return 0;
}
