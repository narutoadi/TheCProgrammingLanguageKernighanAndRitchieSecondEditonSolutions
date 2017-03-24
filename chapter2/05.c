#include<stdio.h>
#include<string.h>

int squeezeIndex(char* s1, char* s2)
{
    int hash[300]={0},i,j,k,l;
    l=strlen(s1);
    char s3[l];
    for(i=0;s2[i];i++){
        hash[s2[i]]=1;
    }
    j=0;
    for(i=0;s1[i];i++)
    {
        if(hash[s1[i]])
        {
           return i;
        }
    }
    return -1;
}
int main()
{
    char s1[100],s2[100];
    int a;
    scanf("%s",s1);
    scanf("%s",s2);
    a = squeezeIndex(s1,s2);
    printf("%d",a);

    return 0;
}

