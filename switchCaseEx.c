/*
int x, n, m;
	int mask, mask8, mask16, mask24, maska, maska2, nMask, mMask;
	mask = 0xFF;
	mask8 = mask<<8;  FF00 
	mask16 = mask<<16;  FF0000/
	mask24 = mask<<24;  FF000000 
	maska = mask | mask8;
	maska2 = maska | maska<<16;
	printf("maska: %x\n",maska); FFFF 
	printf("maska2: %x\n",maska2); FFFFFFFF 
	x = 0x12345678;
	n = 1;
	m = 3;

	 create masks for the bytes being swappe/
	switch(n){
		case 0: 
		nMask = x & 0xFF;  mask first for two bytes 
		printf("nMask = %x\n", nMask);
		x &= 0xFFFFFF00;  update x with mask 
		printf("x = %x\n\n", x);
		break;

		case 1:
		nMask = (x & mask8)>>8;  masks values of 3,4th bytes, then shifts to isolate 
		printf("nMask = %x\n", nMask);
		x &= 0xFFFF00FF;  update x with mask */ 
		printf("x = %x\n\n", x);
		break;

		case 2:
		nMask = (x & mask16)>>16; /*masks values of 5,6th bytes, then shifts to isolate 
		printf("nMask = %x\n", nMask);
		x &= 0xFF00FFFF;  update x with mask  
		printf("x = %x\n\n", x);
		break;

		default:
		nMask = (x & mask24)>>24;  masks values of 7,8th bytes, then shifts to isolate 
		printf("nMask = %x\n", nMask);
		x &= 0x00FFFFFF;
		printf("x = %x\n\n", x);
		break;
	}

	switch(m){
		case 0: 
		mMask = x & 0xFF;  mask first for two bytes 
		printf("mMask = %x\n", mMask);
		x &= 0xFFFFFF00;  update x with mask 
		break;

		case 1:
		mMask = (x & mask8)>>8;  masks values of 3,4th bytes, then shifts to isolate 
		printf("mMask = %x\n", mMask);
		x &= 0xFFFF00FF;  update x with mask 
		break;

		case 2:
		mMask = (x & mask16)>>16; masks values of 5,6th bytes, then shifts to isolate 
		printf("mMask = %x\n", mMask);
		x &= 0xFF00FFFF;  update x with mask 
		break;

		default:
		mMask = (x & mask24)>>24;  masks values of 7,8th bytes, then shifts to isolate 
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
	
	*/