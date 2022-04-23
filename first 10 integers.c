#include <stdio.h>
int main()
{
     int a[10],i,s=0;
     printf("Enter 10 Numbers:\n");
     for(i=0;i<10;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
     }
     printf("\nNumbers Stored in Array : \n");
     for(i=0;i<10;i++)
          printf("a[%d]=%d\n",i,a[i]);
     printf("\nSum of Integer Numbers : %d",s);
     return 0;
}
