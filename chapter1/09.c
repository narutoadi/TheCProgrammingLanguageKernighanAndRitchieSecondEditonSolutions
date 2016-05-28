#include<stdio.h>
main()
{
	int c,i=0;
	c=getchar();
	while(c!=EOF)
	{
		if(c!=' '&&c!='\t'&&i==0)
			putchar(c);
		if(c!=' '&&c!='\t'&&i==1)
		{
			putchar(' ');
			putchar(c);
			i=0;
		}
		if(c==' '&&i==0)
		{
			i=1;
		}
		if(c=='\t'&&i==0)
		{
			i=1;
		}
		c=getchar();
	}
}