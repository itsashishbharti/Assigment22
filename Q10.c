#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,min,n;
    printf("\nEnter Your Size=");
    scanf("%d",&n);
    int *pt=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\n Enter Your Number=");
        scanf("%d",&*(pt+i));
    }
    min=*(pt+0);
    for(int i=0;i<n;i++)
    {
        if(max<*(pt+i))
        {
            max=*(pt+i);
        }
        if(min>*(pt+i))
        {
            min=*(pt+i);
        }
    }
    printf("\n Max=%d \nMin=%d",max,min);
    return 0;
}