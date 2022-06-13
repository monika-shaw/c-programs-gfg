//
// Created by shawm on 11-06-2022.
//

#include <stdio.h>
#include <stdlib.h>


int sumOfNum(int a, int b)
{
     int sum = 0;
     sum = a+b;
     return sum;
}
int main(void)
{
    int a =10, b = 20;
    int (*fun)(int , int);
    int result = 0;
    fun = &sumOfNum;
    result = (*fun)(a,b);
    printf("%d",result);

}