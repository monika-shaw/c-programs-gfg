//
// Created by shawm on 14-06-2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[20], str2[20];

    puts("Enter string 1");
    gets(str1);
    puts("Enter string 2");
    gets(str2);

    int len = strlen(str1);
    int count = 0;
    for (int i = 0; str1[i] !='\0'; ++i) {
        count++;
    }

    for (int i = 0;  i<20; ++i) {
        str1[count] = str2[i];
        count++;
    }
    printf("%s",str1);
}