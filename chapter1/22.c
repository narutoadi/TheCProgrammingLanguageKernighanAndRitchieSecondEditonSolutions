#include<stdio.h>
#define MAX 81
#define MARGIN 10
main()
{
	int c,len=0,i,j;
	char bt[MAX],at[MAX];
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			len=0;
		}
		else
		{
			bt[len++]=c;
			if(len>=MAX)
			{
				for(i=0;i<MARGIN; i++)
				{
					if(bt[len-i-1]==' ') {flag = 1; break;}
				}

			}
		}
	}
}