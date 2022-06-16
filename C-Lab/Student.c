//
// Created by shawm on 15-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[20];
    int roll;
    float marks;
} s[2];

int main(void)
{
    for (int i = 0; i < 2; ++i) {
        puts("Enter the name\n");
        scanf("%s",s[i].name);
        puts("Enter the roll\n");
        scanf("%d",&s[i].roll);
        puts("Enter the marks\n");
        scanf("%f",&s[i].marks);
    }

    for (int i = 0; i < 2; ++i) {
        printf("Name is %s:\n",s[i].name);
        printf("Roll is %d:\n",s[i].roll);
        printf("Marks is %f:\n",s[i].marks);
    }
}