#include<stdio.h>
main()
{
	int c,b=0,t=0,n=0,i;
	c=getchar();
	while(c!=EOF)
	{
		if(c==' ')
			b++;
		if(c=='\t')
			t++;
		if(c=='\n')
			n++;
		c=getchar();
	}
	printf("Blanks : %d\nn",b);
	printf("Tabs : %d\n",t);
	printf("Lines : %d\n",n);
}