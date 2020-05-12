//Trick 3 Using Argumented Macro

#include <stdio.h>
#define mainfunction(main)  m##a##i##n
#define beginning_of_the_main_code  mainfunction(main)



int beginning_of_the_main_code()
{

	printf("C PROGRAM WITHOUT USING MAIN FUNCTION  15");

return 0;
}
