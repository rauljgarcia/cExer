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
	x = 0x12345678 = 			0001 0010 0011 0100 0101 0110 0111 1000; (12345678)
	xnew = 0x56341278 =			0101 0110 0011 0100 0001 0010 0111 1000; (5634)

	0xFF =			   			0000 0000 0000 0000 0000 0000 1111 1111; (255)
	0xFF00 =			   		0000 0000 0000 0000 1111 1111 0000 0000; (255)
	
	nmask = x & OxFF =			0000 0000 0000 0000 0000 0000 0111 1000; (78)
	nmask = x & OxFF00 =		0000 0000 0000 0000 0101 0110 0000 0000; (5600)
	nmask = x & OxFF00 >> 8		0000 0000 0000 0000 0000 0000 0101 0110; (56)
	x &= 0xFFFF00FF = 			0000 0000 0000 0000 0000 0000 0111 1000; (12345600)

	x							0000 0000 0011 0100 0000 0000 0111 1000; (12345678)				
	nmask<<= 8*m				0101 0110 0000 0000 0000 0000 0000 0000; (56000000)
	mmask<<= 8*n				0000 0000 0000 0000 0001 0010 0000 0000; (1200)
	x | nmask | mmask =			0101 0110 0011 0100 0001 0010 0111 1000; (56341278)


	*/


	int a = 0x8; 		/* 1000 */
	int b = 0x1; 		/* 0001 */	
	int c = 0x2;		/* 0010 */

	int d = a | b | c; 	/* 1011*/
	
	printf("%x\n", d);

	 
	


    
	return 0;
}
