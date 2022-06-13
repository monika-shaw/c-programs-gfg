//
// Created by shawm on 13-06-2022.
//
#include <stdio.h>
#include <stdlib.h>

int *isLargest(int *a, int *b, int *c)
{
    if(*a>*b && *a>*c)
        return a;
    else if(*b>*a && *b>*c)
        return b;
    else
        return c;
}

int main(void)
{
    int a, b, c;
    puts("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    int *result;
    result =isLargest(&a,&b,&c);
    printf("%d",*result);

}