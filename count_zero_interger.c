#include<stdio.h>
int count(int b)
{
	int c = 0;
	if(b == 0)
		return b;
	if(b & 1)
		c++;
		
	return (c + count(b>>1));
}
int main()
{
	int a=0;
	int res = count(a);
	printf("res = %d\n", res);
	return 0;
}
