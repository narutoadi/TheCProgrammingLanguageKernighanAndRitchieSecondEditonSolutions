#include<stdio.h>
main()
{
	int c,d;
	c=getchar();
	while(c!=EOF)
	{
		if(c=='\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if(c=='\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if(c=='\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
		c=getchar();
	}
}