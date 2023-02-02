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
    float average;
    for(int i=0;i<n;i++)
      {
        sum=sum+*(ptr+i);
      }
      printf("\n Avarage=%f",average=sum/n);
      return 0;
}