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

	
	int x, n, m;
	int mask, mask8, mask16, mask24, maska, maska2, nMask, mMask;
	mask = 0xFF;
	mask8 = mask<<8; /* FF00 */
	mask16 = mask<<16; /* FF0000 */
	mask24 = mask<<24; /* FF000000 */
	maska = mask | mask8;
	maska2 = maska | maska<<16;
	printf("maska: %x\n",maska);/* FFFF */
	printf("maska2: %x\n",maska2);/* FFFFFFFF */
	x = 0x12345678;
	n = 1;
	m = 3;

	/* create masks for the bytes being swapped*/
	switch(n){
		case 0: 
		nMask = x & 0xFF; /* mask first for two bytes */
		printf("nMask = %x\n", nMask);
		x &= 0xFFFFFF00; /* update x with mask */
		printf("x = %x\n\n", x);
		break;

		case 1:
		nMask = (x & mask8)>>8; /* masks values of 3,4th bytes, then shifts to isolate */
		printf("nMask = %x\n", nMask);
		x &= 0xFFFF00FF; /* update x with mask */ 
		printf("x = %x\n\n", x);
		break;

		case 2:
		nMask = (x & mask16)>>16; /*masks values of 5,6th bytes, then shifts to isolate */
		printf("nMask = %x\n", nMask);
		x &= 0xFF00FFFF; /* update x with mask */ 
		printf("x = %x\n\n", x);
		break;

		default:
		nMask = (x & mask24)>>24; /* masks values of 7,8th bytes, then shifts to isolate */
		printf("nMask = %x\n", nMask);
		x &= 0x00FFFFFF;
		printf("x = %x\n\n", x);
		break;
	}

	switch(m){
		case 0: 
		mMask = x & 0xFF; /* mask first for two bytes */
		printf("mMask = %x\n", mMask);
		x &= 0xFFFFFF00; /* update x with mask */
		break;

		case 1:
		mMask = (x & mask8)>>8; /* masks values of 3,4th bytes, then shifts to isolate */
		printf("mMask = %x\n", mMask);
		x &= 0xFFFF00FF; /* update x with mask */
		break;

		case 2:
		mMask = (x & mask16)>>16; /*masks values of 5,6th bytes, then shifts to isolate */
		printf("mMask = %x\n", mMask);
		x &= 0xFF00FFFF; /* update x with mask */
		break;

		default:
		mMask = (x & mask24)>>24; /* masks values of 7,8th bytes, then shifts to isolate */
		printf("mMask = %x\n", mMask);
		x &= 0x00FFFFFF;
		printf("x = %x\n\n", x);
		break;
	}

	nMask <<= m<<3;
	printf("nMask = %x\n", nMask);
	mMask <<=n<<3;
	printf("mMask = %x\n", mMask);
	int z = x | nMask | mMask;
	
	printf("z = %x\n", z);

	return 0;
}
