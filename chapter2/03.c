#include<stdio.h>
#include<string.h>

int htoi(char s[])
{
    int i,j=0,temp=0;
    for(i=0;s[i];i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            temp=temp*16+(s[i]-'0');
        }
        else if(s[i]>='a'&&s[i]<='f')
        {
            temp=temp*16+(s[i]-'a'+10);
        }
        else {
            temp=temp*16+(s[i]-'A'+10);
        }
    }
    return temp;
}


int main()
{
    char hex[55];
    int dec;
    scanf("%s",hex);
    dec=htoi(hex);
    printf("%d",dec);
    return 0;
}


