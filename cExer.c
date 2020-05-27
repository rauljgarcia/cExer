#include <stdio.h>

int main()
{	
	/*increasing bit vector size from 8 to 16-bit using left shift*/
    int a = 0xaa;
	int b = a<<8;
	printf("%x\n",b);
    
	return 0;
}
