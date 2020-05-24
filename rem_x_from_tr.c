#include<stdio.h>
#include<string.h>
char * rem_x(char p[], char ch)
{
	if(p==NULL)
		return NULL;
	int j=0, i=0;
	int l=strlen(p);
	while(j<l)
	{
	//	printf("p[j] = %c ch = %c\n", p[j], ch);
		if(p[j] == ch)
		{
			for(i=j;i<l;i++)
			{
				p[i] = p[i+1];
			}
			continue;
		}
		j++;
	}
	printf("final string    %s\n", p);
}
int main()
{
	char s[] = "xxab";
	printf("original string %s\n", s);
	rem_x(s, 'x');

}
