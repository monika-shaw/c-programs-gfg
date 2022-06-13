//
// Created by shawm on 13-06-2022.
//
#include <stdio.h>

int size;

int *isCopy(int *arr)
{
    int arr2[size];
    int *ptr2 = arr2;
    int *last = arr2[size];
    for (int i = 0; i <= last; ++i) {
        ptr2[i]= arr[i];
    }
    for (int i = 0; i < size; ++i) {
        printf("%d",ptr2[i]);
    }
    return arr2;
}

int main(void) {
    scanf("%d", &size);
    int arr1[size];
    int *ptr1, *ptr2;
    ptr1 = &arr1[0];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr1[i]);
    }

    int *result;
    result = isCopy(arr1);

}