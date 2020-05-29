#include <stdio.h>


int testBySw(int x, int n, int m)
{
unsigned int nmask, mmask;
switch(n) {
    case 0:
      nmask = x & 0xFF;
      printf("nmask = %x\n", nmask);
      x &= 0xFFFFFF00;
      printf("x = %x\n\n", x);
      break;
    case 1:
      nmask = (x & 0xFF00) >> 8;
      printf("nmask = %x\n", nmask);
      x &= 0xFFFF00FF;
      printf("x = %x\n\n", x);
      break;
    case 2:
      nmask = (x & 0xFF0000) >> 16;
      printf("nmask = %x\n", nmask);
      x &= 0xFF00FFFF;
      printf("x = %x\n\n", x);
      break;
    default:
      nmask = ((unsigned int)(x & 0xFF000000)) >> 24;
      printf("nmask = %x\n", nmask);
      x &= 0x00FFFFFF;
      printf("x = %x\n\n", x);
      break;
    }

    switch(m) {
    case 0:
      mmask = x & 0xFF;
      printf("mmask = %x\n", mmask);
      x &= 0xFFFFFF00;
      printf("x = %x\n\n", x);
      break;
    case 1:
      mmask = (x & 0xFF00) >> 8;
      printf("mmask = %x\n", mmask);
      x &= 0xFFFF00FF;
      printf("x = %x\n\n", x);
      break;
    case 2:
      mmask = (x & 0xFF0000) >> 16;
      printf("mmask = %x\n", mmask);
      x &= 0xFF00FFFF;
      printf("x = %x\n\n", x);
      break;
    default:
      mmask = ((unsigned int)(x & 0xFF000000)) >> 24;
      printf("mmask = %x\n", mmask);
      x &= 0x00FFFFFF;
      printf("x = %x\n\n", x);
      break;
    }

    nmask <<= 8*m;
    printf("nmask = %x\n", nmask);
    mmask <<= 8*n;
    printf("mmask = %x\n", mmask);
    printf("x = %x\n", x);
    return x | nmask | mmask;

}    


int main(){
    int a;
    a = testBySw(0x12345678, 1, 3);
    printf("%x\n", a);



}