
#include<stdio.h> 
void main()
{
    char s[]="STUDY";
    int i,j;
    for(i=0;s[i];i++)
    {
        for(j=0;j<=i;j++)
        printf("%c",s[j]);
        printf("\n");
    }
}
