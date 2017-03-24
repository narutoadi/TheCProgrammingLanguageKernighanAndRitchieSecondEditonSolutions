#include<stdio.h>

unsigned invert(unsigned x,int p,int n);

int main(void)
{
    printf("%u",invert((unsigned)12,2,1));
}

unsigned invert(unsigned x,int p,int n)
{
    return x ^ (~(~0 << n) << (p+1-n)) ;
}

