#include<stdio.h>
#define MAX 100000

int top_parentheses=-1,top_brackets=-1, top_braces=-1; 
main()
{
	int c;
	int flag=0;
	while((c=getchar())!=EOF)
	{
	//	printf("%c",c );
		if(c=='"')
		{
			while((c=getchar())!=EOF && c!='"');
			if(c==EOF) break;

		}
		else if(c=='\'')
		{
			while((c=getchar())!=EOF && c!='\''){ if(c=='\\') {c=getchar(); if(c==EOF) break; }}
			if(c==EOF) break;

		}
		else if(c=='/')
		{
			c=getchar();
			if(c==EOF)
			{
				break;
			}
			else if(c=='/')
			{
				while((c=getchar())!=EOF && c!='\n');
				if(c==EOF) break;				
			}
			else if(c=='*')
			{
				while((c=getchar())!=EOF)
					{
						if(c=='*')
						{
							c=getchar();
							if(c==EOF) break;
							if(c=='/')
								break;
						}
					}
					if(c==EOF) break;
			}
		}
			else
			{
				if(c=='(')
				{
					top_parentheses++;
				}
				else if(c=='{')
				{
					top_braces++;
				}
				else if(c=='[')
				{
					top_brackets++;
				}
				else if(c==')')
				{
					if(top_parentheses<0) {printf("There is error in (parentheses) \n"); flag=1;break;}
					else top_parentheses--;
				}
				else if(c=='}')
				{
					if(top_braces<0) {printf("There is error in {braces} \n"); flag=1; break;}
					else top_braces--;
				}
				else if(c==']')
				{
					if(top_brackets <0) {printf("There is error in [brackets] \n"); flag=1; break;}
					else top_brackets--;


				}
			}
		
	}
//		printf("%d %d %d\n",top_parentheses,top_braces,top_brackets);
		if(flag==0)
		printf("There is no parentheses or braces or brackets related error in the program.\n");
}