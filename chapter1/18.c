// Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
#include<stdio.h>
#define MAX 100000
main()
{
	int c,flag=0,len=0,i;
	char st[MAX];
	while((c=getchar())!=EOF){
		if(c==' '||c=='\t')
		{
			if(flag==0){
			flag=1; len=0;}
			st[len++]=c;
		}
		else if(c=='\n')
		{
			if(flag==0) 
			{for(i=0;i<len;i++)
			 printf("%c",st[i]);
			  printf("\n");}
			flag=0;
			len=0; 
		}
		else
		{
			if(flag==1)
			{
				flag=0;
				for(i=0;i<len;i++) printf("%c",st[i]);
					len=0;
			}
			printf("%c",c);
		}

	}
}