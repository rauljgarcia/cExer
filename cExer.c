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
	int x, n, m;
	int mask, mask8, mask16, mask24, maska, maska2, nMask, mMask;
	mask = 0xFF;
	mask8 = mask<<8;
	mask16 = mask<<16;  
	mask24 = mask<<24;  
	maska = mask | mask8;
	maska2 = maska | maska<<16;
	printf("maska: %x\n",maska); 
	printf("maska2: %x\n",maska2);/ 
	x = 0x12345678;
	n = 1;
	m = 3;

	 
	switch(n){
		case 0: 
		nMask = x & 0xFF; 
		printf("nMask = %x\n", nMask);
		x &= 0xFFFFFF00; 
		printf("x = %x\n\n", x);
		break;

		case 1:
		nMask = (x & mask8)>>8; 
		printf("nMask = %x\n", nMask);
		x &= 0xFFFF00FF; 
		printf("x = %x\n\n", x);
		break;

		case 2:
		nMask = (x & mask16)>>16; 
		printf("nMask = %x\n", nMask);
		x &= 0xFF00FFFF; 
		printf("x = %x\n\n", x);
		break;

		default:
		nMask = (x & mask24)>>24; 
		printf("nMask = %x\n", nMask);
		x &= 0x00FFFFFF;
		printf("x = %x\n\n", x);
		break;
	}

	switch(m){
		case 0: 
		mMask = x & 0xFF; 
		printf("mMask = %x\n", mMask);
		x &= 0xFFFFFF00; 
		break;

		case 1:
		mMask = (x & mask8)>>8; 
		printf("mMask = %x\n", mMask);
		x &= 0xFFFF00FF; 
		break;

		case 2:
		mMask = (x & mask16)>>16; 
		printf("mMask = %x\n", mMask);
		x &= 0xFF00FFFF; 
		break;

		default:
		mMask = (x & mask24)>>24; 
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
*/

/*
	int x,n,m,nMask, mMask, combMask, maskedWrd, swapN, swapM, swapT, isolateN, isolateM;;
	
	x = 0x7fffffff;
	n = 0;
	m = 0;

	printf("x= %x\n", x);

	nMask = 0xFF<<(n<<3);
	printf("nMask= %x\n", nMask);
	isolateN = (x & nMask)>>(n<<3);
	printf("isolateN= %x\n", isolateN);

	mMask = 0xFF<<(m<<3);
	printf("mMask= %x\n", mMask);
	isolateM = (x & mMask)>>(m<<3);
	printf("isolateM= %x\n", isolateM);

	combMask = ~(nMask | mMask);
	printf("combMask= %x\n", combMask);

	maskedWrd = x&combMask;
	swapN = maskedWrd | isolateN <<(m<<3);
	swapM = swapN | isolateM <<(n<<3);
	swapT = ~swapM+1;

	printf("maskedWrd= %x\n", maskedWrd);
	printf("swapM= %x\n", swapT); 
	*/

	int x, y;
	x = 80000000;
	y = 80000000;
	int z = !(!(x ^ y));
	printf("z= %x\n", z);



	return 0;
}
