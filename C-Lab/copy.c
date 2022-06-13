//
// Created by shawm on 13-06-2022.
//
#include <stdio.h>

int size;

int *isCopy(int *ptr1, int *ptr2)
{
    for (int i = 0; i < size; ++i) {
        ptr2[i]= ptr1[i];
    }
    return ptr2;
}

int main(void) {
    puts("Enter the size");
    scanf("%d", &size);
    int arr1[size];
    int *ptr1;
    ptr1 = &arr1[0];
    int arr2[size];
    int *ptr2;
    ptr2= arr2;
    puts("Enter array elements");
    for (int i = 0; i < size; ++i) {
        scanf("%d\n", &arr1[i]);
    }
    for (int i = 0; i < size; ++i) {
        printf("before copying :%d\n",arr1[i]);
    }

    int *result;
    result = isCopy(arr1, arr2);
    for (int i = 0; i < size; ++i) {
        printf("after copying%d\n",result[i]);
    }


}