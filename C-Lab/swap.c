//
// Created by shawm on 13-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

void isSwap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("after swapping : %d%d",*a,*b);

}
int main(void)
{
    int a, b;
    puts("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("before Swapping :%d%d",a,b);
    isSwap(&a,&b);
    printf("actual :%d%d",a,b);

}