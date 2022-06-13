//
// Created by shawm on 13-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

int isSum(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
}
int main(void)
{
    int a,b;
    puts("Enter a and b");
    scanf("%d%d",&a,&b);
    int result = isSum(&a,&b);
    printf("%d", result);

}
