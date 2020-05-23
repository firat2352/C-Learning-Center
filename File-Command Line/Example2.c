//Find the character count from the command line

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void find_ch(char *ptr,int ch)
{
	int len = 0;

	while (*ptr++ != '\0')
		if (*ptr == ch)
			len++;

	printf("NUMBER OF CHARACTER= %d",len );
	getch();
}

int main(int argc, char **argv)
{
	char a[SIZE];
	int ch;

	if (argc != 3) 
	{
		printf("ENTER THE ARRAY:");
		gets(a);
		printf("ENTER THE CHARACTER TO SEARCH:");
		ch = getchar();
	}

	else 
	{
	strcpy(a, argv[1]);
	ch = argv[2][0];
	}
	


	find_ch(a, ch);




	return 0;
}


