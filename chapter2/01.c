#include<stdio.h>
main()
{
	signed char a,a0;
	signed short b,b0;
	signed int c,c0;
	signed long d,d0;
	unsigned char e,e0;
	unsigned short f,f0;
	unsigned int g,g0;
	unsigned long h,h0;
	a0 = a-1;
	b0 = b-1;
	c0 = c-1;5
	d0 = d-1;
	e0 = e-1;
	f0 = f-1;
	g0 = g-1;
	h0 = h-1;
	for(;a0<a;a++,a0=a-1); printf("Range signed Character = [%d, %d]\n",a,a0);
		for(;b0<b;b++,b0=b-1); printf("Range signed short = [%i, %i]\n",b,b0);
			for(;c0<c;c++,c0=c-1); printf("Range signed int = [%d, %d]\n",c,c0);
			//	for(;d0<d;d++,d0=d-1); printf("Range signed long = [%ld, %ld]\n",d,d0);
					for(;e0<e;e++,e0=e-1); printf("Range unsigned Character = [%d, %d]\n",e,e0);
						for(;f0<f;f++,f0=f-1); printf("Range unsigned short = [%u, %u]\n",f,f0);
							for(;g0<g;g++,g0=g-1); printf("Range unsigned int = [%u, %u]\n",g,g0);
			//					for(;h0<h;h++,h0=h-1); printf("Range unsigned long = [%ld, %ld]\n",h,h0);

}