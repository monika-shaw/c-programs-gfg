//
// Created by shawm on 16-06-2022.
//

#include <stdio.h>

struct Add
{
    int a;
    int b;
    int sum;
    char name[2][100];
} add;

int sum(int a, int b)
{
    add.sum = a+b;
    return add.sum;
}
int main(void)
{
    printf("enter the numbers");
    scanf("%d%d",&add.a,&add.b);
    int result = sum(add.a, add.b);
    printf("Result is :%d",add.sum);
    puts("Enter the students");
    for (int i = 0; i < 2; ++i) {
        scanf("%s",add.name[i]);
    }
    for (int i = 0; i < 2; ++i) {
        printf("%s",add.name[i]);
    }
}

