//find the character count from command line in a file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FILE_NAME_SIZE FILENAME_MAX


int main(int argc,char**argv)
{
	FILE *ptr;
	char file_name[FILE_NAME_SIZE];
	int counter = 0;
	int csearch, ch;


	if (argc != 3)
	{
		printf("PLEASE ENTRY THE FILE NAME=");
		gets(file_name);
		putchar('\n');
		printf("PLEASE ENTRY CHARACTER=");
		csearch=getchar();
	}

	else
	{
		strcpy(file_name, argv[1]);
		csearch=*argv[2];
	}


	if((ptr = fopen(file_name, "r")) == NULL)
	{
		printf(" file %s couldn't be opened ", file_name);
		exit(EXIT_FAILURE);
	}

	
	while ((ch = fgetc(ptr)) != EOF)
		if (ch == csearch)
			counter++;

	fclose(ptr);
	printf("There are %d %c characters in %s", counter,csearch, file_name);


	return 0;
}


