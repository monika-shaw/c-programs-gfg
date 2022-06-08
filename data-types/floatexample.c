//
// Created by shawm on 08-06-2022.
//
/*#include<stdio.h>
int main()
{
    float x = 0.1;
    if (x == 0.1)
        printf("IF");
    else if (x == 0.1f)
        printf("ELSE IF");
    else
        printf("ELSE");
}*/
#include<stdio.h>
int main()
{
    float x = 0.1;
    printf("%d %d %d", sizeof(x), sizeof(0.1), sizeof(0.1f));
    return 0;
}
