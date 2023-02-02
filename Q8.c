#include<stdio.h>
int *show()
{
    int x = 5;
    return &x;
}
int main()
{
    int *ptr = show ();
    printf ("%d", *ptr);//This ptr is dagling pointer
    return 0;
}