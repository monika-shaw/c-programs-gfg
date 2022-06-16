//
// Created by shawm on 16-06-2022.
//
#include <stdio.h>

/*
int main(void)
{
    FILE *p;
    p = fopen("data.txt","w");
    fprintf(p,"Hello I am Raunak kumar");
    fclose(p);
}*/

int main(void)
{
    char str[200];
    FILE *ptr;
    ptr = fopen("data.txt","r");
    while (fscanf(ptr,"%s",str) != EOF)
    {
        printf("%s",str);
    }
}