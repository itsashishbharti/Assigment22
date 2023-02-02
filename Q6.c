#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,big=0;
    printf("\n how much number you want to sttore=");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\n Enter Your Number=");
        scanf("%d",&*(ptr+i));
    }
    for(int i=0;i<n;i++)
      {
        if(big<*(ptr+i))
        {
            big=*(ptr+i);
        }
      }
      printf("\n Big=%d",big);
      free(*ptr);
      return 0;
}