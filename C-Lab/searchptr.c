//
// Created by shawm on 14-06-2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int size;
int isSearch(int *ptr, int element)
{
    for (int i = 0; i < size; i++) {
       if(ptr[i] == element)
           return element;
    }
    return 0;
}
int main(void)
{

    puts("Enter the number of elements in an array");
    scanf("%d",&size);
    int arr[size];
    int *ptr;
    ptr = arr;
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    int element;
    puts("enter the element to be searched");
    scanf("%d",&element);
    int result = isSearch(ptr,element);
    if(result == element)
        printf("Element found: %d",element);
    else
        printf("Element not found : %d",element);

}