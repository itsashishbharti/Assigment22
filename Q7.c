#include<stdio.h>
#include<string.h>
int main()
{
    int *ptr=(int *)malloc(4*sizeof(int));
    int y;
    ptr=&y;//In this Case previous memory alllocation is delinked.This case is memory leaked;
}