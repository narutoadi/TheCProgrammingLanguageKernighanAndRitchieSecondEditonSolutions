#include<stdio.h>
#define MAX 1000000
char st[MAX],pt[MAX];
main()
{
	int c,max=0,i,len=0;
	while((c=getchar())!=EOF){
		if(c=='\n')
		{
			if(len>max){
				max=len;
				len=0;
				for(i=0;i<max;i++)
					pt[i]=st[i];
			}
			
		}
		else {if(len<MAX)st[len++]=c;else len++;}

	}
		printf("%s\n",pt);

}