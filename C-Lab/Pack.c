//
// Created by shawm on 16-06-2022.
//
#include <stdio.h>
#include <stdlib.h>

union pack
{
    char a;
    int b;
    double c;
} p;
int main(void)
{
    printf("Occupied size by union pack is : %d\n",sizeof(p));
    p.a='a';
    printf("value of a is %c\n",p.a);
    p.b = 10;
    printf("Value of b is %d\n",p.b);
    p.c = 67.8;
    printf("Value of c is %lf\n",p.c);
    p.a='a';
    p.b=10;
    p.c=67.8;
    printf("values are : a:%c, b:%d, c:%lf",p.a,p.b,p.c);
    return 0;
}