// Horizontal histogram
#include<stdio.h>
#define MAXLEN 1000000
int frequency[1000001] = {0};
main()
{
	int c,len,i,j;
	len = 0;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t'||c=='\n'){
			frequency[len]++;
			len=0;
		}
		else len++;
	}
	int prev=0;
printf("  ");
	for(j=20;j>=0;j--){
		
//		printf("%2.0f\n",j*1.0);
		for(i=0;i<frequency[j]-prev;i++){
			printf("-");
		}
		printf("\n%2.0f",j*1.0);
		for(i=0;i<frequency[j]-1;i++)
			printf(" ");
		printf("|");
		printf("\n  ");
		for(i=0;i<frequency[j]-1;i++)
			printf("-");
		prev=frequency[j];
		
	}
}