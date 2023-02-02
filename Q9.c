#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("\n Enter Your Byte Size=");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n);
    if(ptr==NULL)
    {
        printf("\n Memorry allocation faield");
        return 0;
    }
    else
    {
       printf("\n Memorry allocated..."); 
    }
}