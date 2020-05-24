#include<stdio.h>
#include<string.h>
char * rem_x(char p[], char ch)
{
	if(p==NULL)
		return NULL;
	int j=0, i=0;
	int l=0;
	char a[20];
	l=strlen(p);
	while(j<l)
	{
		/* As the adding * to the string the length of the string is going to add continusouly
		 *  so each time we have to update the length of the string */
		l=strlen(p);
	//	printf("len = %d\n", l);
		if(p[j] == p[j+1])
		{	
			i = l;
			while(i>=(j+1))
			{
				p[i+1] = p[i];
				i--;
			}
			p[j+1] = '*';
		}
		j++;
	}
	printf("final string    %s\n", p);
}
int main()
{
	char s[10] = "aaaa";
	printf("original string %s\n", s);
	rem_x(s, 'x');

}
