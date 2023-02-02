#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("\n Enter your text length=");
    scanf("%d",&n);
    char *p=(char *)malloc(n*sizeof(char));
    printf("\n Enter Your Text:-");
    scanf("%s",&*p);
    printf("\n Text..........%s",p);
    return 0;
}