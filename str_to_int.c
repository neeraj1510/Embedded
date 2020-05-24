#include <stdio.h>

int main()
{
	unsigned char text[]="1234";
	int intValue;
	
	/* 0x30 = 48 in decimal
	 * char 1 = 49 in decimal so (49-48)*1000 = 1000
	 * char 2 = 50 in decimal so (50-48)*100  =  200
	 * char 3 = 51 in decimal so (51-48)*10   =   30
	 * char 4 = 52 in decimal so (52-48)*1    =    4
	 */
	intValue=((text[0]-0x30)*1000)+((text[1]-0x30)*100)+((text[2]-0x30)*10)+((text[3]-0x30));
	printf("Integer value is: %d\n",intValue);
}
