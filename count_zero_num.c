#include<stdio.h>
int count(int b)
{
	int c = 0;
	if(b == 0)
		return b;
	if(!(b % 10))
		c++;
		
	return (c + count(b/10));
}
int main()
{
	int a=708000;
	int res = count(a);
	printf("res = %d\n", res);
	return 0;
}
