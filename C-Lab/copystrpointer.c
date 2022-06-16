//
// Created by shawm on 14-06-2022.
//

#include <stdio.h>

char *isCopy(char *ptr1, char *ptr2)
{
    for (int i = 0; i<20; ++i) {
        ptr2[i] = ptr1[i];
    }
    printf("%s",ptr2);
    return ptr2;
}
int main(void)
{
    char str1[20],str2[20];
    gets(str1);
    char *ptr1 = str1;
    char *ptr2 = str2;
    char *result;
    result= isCopy(str1, str2);
      printf("%s",result);


}