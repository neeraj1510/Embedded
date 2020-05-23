#include<stdio.h>
int palind(char *p1, char *p2, int len)
{
	if(len <= 0)
		return 1;
	if(*p1 != *p2)
		return 0;
	else
		palind(p1++, p2--, len/2);

}
int main()
{
	char *str = "namanl";
	char *str2 = (str+5);
	if ((palind(str, str2, 4)) == 1)
		printf("string is palindrom\n");
	else
		printf("string is not palindrom\n");
}
