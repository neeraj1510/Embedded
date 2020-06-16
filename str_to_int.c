#include <stdio.h>
/* dynamically decide the decimal value */
int method2(char text[])
{
	int intValue = 0;
	char *ptr = text;

	/*
	 *  0x30 = 48 in decimal
	 */
	int sign =1;
	if(*ptr == '-')
	{
		sign = -1;
		ptr++;
	}
	while(*ptr != '\0')
	{
		intValue = intValue*10 + (*ptr - 48);
		ptr++;
	}

	printf("Integer value is: %d\n",sign  * intValue);
}

/* Only limited to 4 decimal point */
int method1(char text[])
{
	int intValue = 0;

	/* 0x30 = 48 in decimal
	 * char 1 = 49 in decimal so (49-48)*1000 = 1000
	 * char 2 = 50 in decimal so (50-48)*100  =  200
	 * char 3 = 51 in decimal so (51-48)*10   =   30
	 * char 4 = 52 in decimal so (52-48)*1    =    4
	 */
	if(text[0] != '-')
		intValue=((text[0]-0x30)*1000)+((text[1]-0x30)*100)+((text[2]-0x30)*10)+((text[3]-0x30));
	else
		intValue=-(((text[1]-0x30)*1000)+((text[2]-0x30)*100)+((text[3]-0x30)*10)+((text[4]-0x30)));

	printf("Integer value is: %d\n",intValue);
}

int main()
{
	unsigned char text[]="12345";
	method1(text);
	method2(text);
}
