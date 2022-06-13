//
// Created by shawm on 12-06-2022.
//
/*
#include <stdio.h>

int main(void)
{
    char str[2][6] = {{"hi"},{"Hello"}};
    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", str[i]);
    }
}*/

/*
#include <stdio.h>

int main(void)
{
    char str[200];
    scanf("%[^\n]s",&str);
    printf("%s\n", str);

}*/

/*
#include <stdio.h>

int main(void)
{
    char str[200];
    gets(str);
    printf("%s\n", str);

}*/

#include <stdio.h>
#include <string.h>

char *isReverse(char str[])
{
    int len, temp = 0;
    len =strlen(str);
    for (int i = 0; i <len/2; ++i) {

        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1]=temp;
    }
    return str;
}
int main(void)
{
    char str[200];
    scanf("%[^\n]s",&str);
    char *result;
     result = isReverse(str);

    printf("%s\n", result);

}
