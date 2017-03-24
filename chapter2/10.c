#include<stdio.h>
char lower(char a)
{
    return (a>='A'&&a<='Z'? (a-'A'+'a') : (a) );
}
int main()
{
    char x[50],a;
    int i;
    scanf("%s",x);
    for(i=0;x[i];i++)
    {
        x[i]=lower(x[i]);
    }
    printf("%s",x);
    return 0;
}
