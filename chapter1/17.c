// 17. Write a program to print all input lines that are nc than 80 characters
#include<stdio.h>
main()
{
	int c,len=0;
	char st[85];
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			if(len<=80) len=0;
		}
		else
		{
			st[len++]=c
			;
			if(len>80)
			{
				printf("%s",st);
				while((c=getchar())!='\n')
					printf("%c",c);
				len=0;
				printf("\n");
			}
		}
	}
}