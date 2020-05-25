/* Given a string S, remove consecutive duplicates from it recursively. */

#include<stdio.h>
#include<string.h>
char * rem(char a[], int start )
{
	int len = strlen(a);
	if((a == NULL) || (a[start+1] == '\0'))
		return NULL;
	int tmp = start;
	if(a[start] == a[start+1])
	{
		while(tmp < len)
		{
			a[tmp] = a[tmp+1];
			tmp++;
		}
		/* call recursive here if string like xxxxx or aaabccba*/
		rem(a, start);
	}
	rem(a, start+1);
}

int main()
{
	char s[] = "xxxxx";
	printf("original String = %s\n", s);
	rem(s, 0);
	printf("Final String 	= %s\n", s);

}
