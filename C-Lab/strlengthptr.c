//
// Created by shawm on 14-06-2022.
//

#include <stdio.h>

int main(void)
{
    int size;
    scanf("%d",&size);
    char str[10];
    char *ptr;
    ptr = str;
    gets(str);
    int count= 0;
    for ( int i = 0; ptr[i]!= '\0'; ++i) {
        count++;
    }
    printf("Length is %d",count);

}


