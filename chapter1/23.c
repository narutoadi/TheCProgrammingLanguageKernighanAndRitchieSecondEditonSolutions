#include<stdio.h>
#include<stdlib.h>
main()
{
	int c;
	while((c=getchar())!=EOF)
	{
		if(c=='"'){
			printf("\"");
			while((c=getchar())!='"')
			{
				printf("%c",c);
			}
			printf("\"");
		}
		else if(c=='/')
		{
			c=getchar();
			if(c!=EOF)
			{
				if(c=='/')
				{
					while((c=getchar())!='\n')
					{
						if(c==EOF) exit(0);
					}
				}
				else if(c=='*')
				{
					while(c=getchar())
					{
						if(c=='*')
						{
							c=getchar();
							if(c=='/')
								break;
						}
					}

				}
				else
				{
					printf("/%c",c);
			//		while((c=getchar())!='/') printf("%c",c);
				} 
			}
		}
		else
			printf("%c",c );
	}

}