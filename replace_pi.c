#include<stdio.h> 
#include<string.h> 

/* Function to replace string subset with spicific string*/
char *replace_pi(char a[], int len)
{
	if(len == 0 )
		return NULL;
	/*create a new array for output */
	char output[len];
	char *ptr = output;	
	/* As looking for 2 characters so execute loop upto  second last value */
	int i = 0;
	for(i = 0; i<len; i++)
	{
		if((i+1<len) && (a[i] == 'p') && (a[i+1] == 'i'))
		{ 
			*ptr++ = '3';
			*ptr++ = '.';
			*ptr++ = '1';
			*ptr++ = '4';
			/* Taking two  characters p and i so make i increment by 2*/
			i++;

		}
		else
		{
			*ptr++ = a[i];
		}
	}
	*ptr = '\0';
	printf("final string is    %s\n", output);
}

int main() 
{ 
	char str[] = "GOPALDASpiARJUN"; 
	printf("Original String is %s\n", str);
	char *out = replace_pi(str, strlen(str));
	return 0; 
} 

