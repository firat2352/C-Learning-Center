//Trick 5 Stringizing Operator	

#include <stdio.h>	

#define str(stringizing) #stringizing	


int main()
{

	printf(str(I AM GOING OUT));



	return 0;
}
