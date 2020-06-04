#include <stdio.h>

int main()
{	
	/*increasing bit vector size from 8 to 16-bit using left shift
	int a = 0xaa;
	int b = a<<8;
	printf("b= %x\n", b);
	*/


	/* returning 16 bit word from 8, all even-numbered bits are set to 1 
	int a = 0x55;
	printf("a= %x\n", a);
	int b = a<<8;
	printf("b= %x\n", b);
	int c = b | a;
	printf("c= %x\n", c);
	int d = c<<16;
	printf("d= %x\n", d);
	int e = d | c;
	printf("e= %x\n", e);
	*/

	/*
    int a = 0x1;
    int b = ~a + 1;
    printf("b = %x\n", b)
  	return b;
	  */
	
	/* check if all even-numbered bits set to 1
	int x = 0xFFFFFFFE;
	int a = 0x55;
	int	b = a<<8;
	int c = b | a;
	int d = c << 16;
	int e = d | c;

	int z = !(~x & e);
	printf("%x\n",z);
	*/


	/* check if any odd-numbered bits in a 32 bit word are set to 1 
	int x = 0x5;
	int a = 0xaa;
	int	b = a<<8;
	int c = b | a;
	int d = c << 16;
	int e = d | c;

	int z = !(!(x & e));
	printf("e=%x \n", e );
	} 
*/




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
	int x,n,m,nMask, mMask, combMask, maskedWrd, swapN, swapM, swapT, isolateN, isolateM, isolateMM, isolateNN;
	
	x = 0x80000000;
	n = 3;
	m = 0;

	printf("x= %x\n", x);

	nMask = 0xFF<<(n<<3);
	printf("nMask= %x\n", nMask);
	isolateN = (x & nMask)>>(n<<3);
	isolateNN = isolateN & 0xFF;
	printf("isolateN= %x\n", isolateN);

	mMask = 0xFF<<(m<<3);
	printf("mMask= %x\n", mMask);
	isolateM = (x & mMask)>>(m<<3);
	isolateMM = isolateM & 0xFF;
	printf("isolateM= %x\n", isolateM);
	printf("isolateMM= %x\n", isolateMM);

	combMask = ~(nMask | mMask);
	printf("combMask= %x\n", combMask);

	maskedWrd = x&combMask;
	printf("maskedWrd= %x\n", maskedWrd);

	swapN = maskedWrd | isolateNN <<(m<<3);
	swapM = swapN | isolateMM <<(n<<3);
	swapT = swapM;

	
	printf("swapT= %x\n", swapT); 
	*/

/*
	int x, y, z, z1, varMask, varSbit,sum, sumSbit, totSbit, varSbitx, varSbity, totSbit2;
	x =     0x80000000;
	y = 	0x7fffffff;
	z = 0x80;
	z1 = z<<24;
	
	// varSbit = !(!((x & z) & (z1)));
	varSbitx = !(!(x & z1));
	
	varSbity = !(!(y & z1));
	varSbit = !(!((varSbitx & varSbity)));

	sum = x+y;

	sumSbit = !(!(z1 & sum));
	totSbit = !(!(varSbit & sumSbit));

	printf("varSbitx = %x\n", varSbitx);
	printf("varSbity = %x\n", varSbity);
	printf("varSbit = %x\n", varSbit);
	printf("sumXZ = %x\n", sum);
	printf("sumSbit = %x\n", sumSbit);
	printf("totSbit = %x\n", totSbit);
	

	int x, y, z, a;
	x = 2;
	y = 4;
	z = 5;

	a = (x ? y : z);

	printf("a = %d\n", a);

*/	
	
	
	


	return 0;
}
