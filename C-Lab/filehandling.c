//
// Created by shawm on 16-06-2022.
//

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char ch;
    fp = fopen("myfile","r");
    while (1)
    {
        ch = fgetc(fp);
        if(ch ==EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
}