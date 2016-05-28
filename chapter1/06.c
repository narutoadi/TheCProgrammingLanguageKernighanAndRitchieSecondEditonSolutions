#include<stdio.h>
main()
{
	int c,d,e=0;
	c=getchar();
	d=(c!=EOF);
	while(d){
		e++;
		//printf("%d\n",d );
		c=getchar();
		d=(c!=EOF);
	}
	printf("%d\n",e );
	printf("%d\n",c );
}