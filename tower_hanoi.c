#include<stdio.h>
int towr_hanoi(int disc, char from, char to, char aux)
{
	if(disc == 1)
	{
		printf("Disc %d %c %c\n", disc, from, to);
		return 1;
	}
	towr_hanoi(disc-1, from, aux, to);
	printf("disc %d %c %c\n", disc, from, to);
	towr_hanoi(disc-1, aux, to, from);
}
int main()
{
	int n = 0;
	printf("Enter the disc\n");
	scanf("%d", &n);
	if(n>0)
	towr_hanoi(n, 'a', 'c', 'b');
	return 0;
}
