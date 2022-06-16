//
// Created by shawm on 16-06-2022.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ptr;
    char str[100];
    ptr = fopen("info.txt","r");
    while (fscanf(ptr,"%s",str)!= EOF)
    {
        printf("%s",str);
    }
}