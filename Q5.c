#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    printf("\n how much number you want to sttore=");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\n Enter Your Number=");
        scanf("%d",&*(ptr+i));
    }
    printf("\n\n");
    for(int i=0;i<n;i++)
      {
        printf("%d ",*(ptr+i));
        sum=sum+*(ptr+i);
      }
      printf("\n Sum=%d",sum);
      free(*ptr);
      return 0;
}