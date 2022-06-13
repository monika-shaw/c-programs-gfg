//
// Created by shawm on 13-06-2022.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

size_t n;
bool isPalindrome(char str[])
{
    int temp = 0;
    char str1[n];
    int len = strlen(str);
    for (int i = 0; i <=len; ++i) {
            str1[i] = str[i];
    }

    for (int i = 0; i < len/2; ++i) {
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i - 1] = temp;
    }
    if(strcmp(str, str1) == 0)
        return true;
    else
        return false;



}
int main(void)
{

    char str[n];
    gets(str);
    bool result;
    result= isPalindrome(str);
    if(result == true)
        printf("Palindrome");
    else
        printf("Not palindrome");

}