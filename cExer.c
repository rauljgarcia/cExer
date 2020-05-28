#include <stdio.h>

int main()
{	
	/*increasing bit vector size from 8 to 16-bit using left shift
	int a = 0xaa;
	int b = a<<8;
	*/

	/* returning 16 bit word from 8, all even-numbered bits are set to 1 
	int a = 0x55;
	int b = a<<8;
	int c = b | a;
	int d = c<<16;
	int e = d | c;
	*/
	
	/* check if any odd-numbered bits in a 32 bit word are set to 1
	int anyOddBit(int x){
	int a = 0xaa;
	int	b = a<<8;
	int c = b | a;
	int d = c << 16;
	int e = d | c;

	int z = !(!(x & e));
	} */


	/* check if all even-numbered bits set to 1
	int allEvenbits(x)
	int a = 0x55;
	int	b = a<<8;
	int c = b | a;
	int d = c << 16;
	int e = d | c;

	int z = !(~x & e);
	printf("%x\n",z);
	} */

	/*
	1111 1111 1111 1111 1111 1111 1111 1110
	0101 0101 0101 0101 0101 0101 0101 0101

	0101 0101 0101 0101 0101 0101 0101 0101 
	1111 1111 1111 1111 1111 1111 1111 1111 */

	/*
	0001 0010 0011 0100 
	0001 0010 0000 0000 */

	 
	


    
	return 0;
}
