//
// Created by shawm on 07-06-2022.
//

#include <stdio.h>
int main(void) {
    /* char str[20];
     printf("Enter a string");
     scanf("%[^\n]", &str);
     printf("%s", str);
 }*/

    char text[20];
    gets(text);
    printf("%s", text);
}