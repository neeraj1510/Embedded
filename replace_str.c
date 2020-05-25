/* Given an input string S and two characters c1 and c2
 * you need to replace every occurrence of character c1 with character c2 in the given string.
 * Do this recursively.
 */
#include<stdio.h>
#include<string.h>
/* check with last to first */
char * rep_from_last(char x[], int len, char a, char b)
{
	if(len < 0 )
		return NULL;
	if(x[len] == a )
	{
		x[len] = b;
	}
	rep_from_last(x, len-1, a, b);
}

/* check with first to last */
char * rep_from_first(char x[], int start, char a, char b)
{
	if(x[start] == '\0' )
		return NULL;
	if(x[start] == a )
	{
		x[start] = b;
	}
	rep_from_first(x, start+1, a, b);
}
int main()
{
	char a[] = "hello";
	int l = strlen(a);
	printf(" Original String = %s \n", a);
	char c1 = 'l', c2 = 'k';
	/* check with last to first */
	rep_from_last(a, l-1, c1, c2);
	printf(" Final String = %s \n", a);
	c1 = 'k' ; c2 = 'l';
	/* check with first to last */
	rep_from_first(a, 0, c1, c2);
	printf(" Final String = %s \n", a);
	return 0;
}
