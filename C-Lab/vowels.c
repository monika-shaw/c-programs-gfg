//
// Created by shawm on 13-06-2022.
//
#include <stdio.h>
#include <string.h>
size_t n;
int isVowel(char str[])
{
    int count = 0;
    int len =strlen(str);
    for (int i = 0; i <len; ++i) {
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }

    }

    return count;
}
int main(void)
{
    char str[n];
    gets(str);
    int result = isVowel(str);
    printf("vowels are %d",result);
}