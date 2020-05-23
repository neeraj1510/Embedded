#include<stdio.h> 
#include<string.h> 

/* Function to check the index value of subset*/
char * index_val_subset(char *p, char *s)
{	
	if(p==NULL)
		return NULL;

	if(strlen(p)<1)
	{
		return NULL;
	}
	int i = 0,  len = strlen(p);
	for(i=0;i<len;i++)
	{
		if((i+1 < len) && (p[i] == s[0]) && (p[i+1] == s[1]) && (p[i+2] == s[2]))
		{
			printf("indexs are %d to %d\n", i, i+2);
		i++;
		}
	

	}

}
int main() 
{ 
	char str[] = "GOPALDASARJUN"; 
	char subset[] = "DAS";
	printf("Original String is %s\n", str);

	index_val_subset(str,subset);
	return 0; 
} 

