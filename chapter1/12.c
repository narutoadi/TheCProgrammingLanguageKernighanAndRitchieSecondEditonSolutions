#include<stdio.h>
main()
{
	int c,d=0;
	c=getchar();
	while(c!=EOF)
	{
		if(c!=' '&&c!='\t'&&c!='\n'&&d==0)
		{
			putchar(c);
		}
		if(c!=' '&&c!='\t'&&c!='\n'&&d==1)
		{
			d=0;
			putchar('\n');
			putchar(c);
		}
		if(c==' '&&d==0)
			d=1;
		if(c=='\t'&&d==0)
			d=1;
		if(c=='\n'&&d==0)
			d=1;

		c=getchar();
	}
}