// Horizontal histogram
#include<stdio.h>
int freq[257]={0};
main()
{
	int c,i,j;
	while((c=getchar())!=EOF){
		freq[c]++;
	}
	int prev=0;
	for(j=0;j<257;j++)
	{
		if(freq[j]>0){
			for(i=0;i<freq[j]-prev;i++){
			printf("-");
		}
		printf("\n%c",j);
		for(i=0;i<freq[j]-1;i++)
			printf(" ");
		printf("|");
		printf("\n  ");
		for(i=0;i<freq[j]-1;i++)
			printf("-");
		prev=freq[j];

		}
	}
}