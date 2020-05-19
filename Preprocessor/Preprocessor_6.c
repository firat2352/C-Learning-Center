//Trick 6 macro and function with same names

#include <stdio.h>
#define square(x) (x+x)

double (square)(double x)
{
	return x*x;
}

int main()
{
	double y = 15;

	printf("AS MACRO=%f\n", square(y));
	printf("AS FUNCTION=%f",(square)(y));


	return 0;
}


