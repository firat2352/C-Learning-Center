//Reading File from Command Line 
#include <stdio.h>
#include <string.h>


int main(int argc, char**argv)
{
	FILE *ptr;
	char file_name[50];
	int ch;


	if (argc != 2)
	{
		printf("PLEASE ENTRY THE FILE NAME=");
		gets(file_name);

	}

	else
		strcpy(file_name, argv[1]);

	if ((ptr = fopen(file_name, "r")) == NULL)
		;

	while ((ch = fgetc(ptr)) != EOF)
		putchar(ch);

	fclose(ptr);

	return 0;
}


