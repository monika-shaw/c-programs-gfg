//
// Created by shawm on 07-06-2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int size;
    bool exitStatus =EXIT_SUCCESS;
    puts("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    puts("Enter the elements");
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    int temp = 0 , max = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                max = arr[j];

            }
        }
    }
    if(max % 2 == 0)
        puts("WON");
    else {
        puts("LOSE");
        exitStatus = EXIT_FAILURE;
    }
    return exitStatus;

}