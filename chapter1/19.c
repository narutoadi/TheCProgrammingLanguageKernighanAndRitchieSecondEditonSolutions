// 19. Write a function reverse(s) that reverses the character string s.Use it to write a program that reverse its input a line at a time.
#include<stdio.h>
char t[100000];
void reverse (char s[], int len)
{
	int j=0,i;
	for(i=len-1;i>=0;i--){

		t[j++]=s[i];
	}
}
main()
{
	int c,len=0,i;
	char st[100000];
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			reverse(st,len);
			for(i=0;i<len;i++)
			{
				printf("%c", t[i]);

			}
			printf("\n");

			len=0;
		}
		else
		{
			st[len++]=c;
		}
	}
}