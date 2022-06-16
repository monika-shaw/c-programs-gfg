/*
//
// Created by shawm on 14-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

int size;
int row;

int main(void)
{
    puts("Enter row");
    scanf("%d",&row);
    puts("Enter column");
    scanf("%d",&size);

    int arr1[row][size], arr2[row][size], arr3[row][size];
    int (*ptr1)[size],(*ptr2)[size],(*ptr3)[size];
    ptr1 = arr1;
    ptr2 = arr2;
    ptr3 = arr3;
    puts("Enter element at array 1");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d",&arr1[i][j]);
        }
    }


    puts("Enter element at array 2");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d",&arr2[i][j]);
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            ptr3[i][j] = ptr2[i][j] + ptr1[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d",ptr3[i][j]);
        }
    }
}
*/


//
// Created by shawm on 14-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

int size;
int row;

void isMatrix(int (*ptr1)[size],int (*ptr2)[size],int (*ptr3)[size])
{
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            ptr3[i][j] = ptr2[i][j] + ptr1[i][j];
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d",ptr3[i][j]);
        }
    }
}
int main(void)
{
    puts("Enter row");
    scanf("%d",&row);
    puts("Enter column");
    scanf("%d",&size);

    int arr1[row][size], arr2[row][size], arr3[row][size];
    int (*ptr1)[size],(*ptr2)[size],(*ptr3)[size];
    ptr1 = arr1;
    ptr2 = arr2;
    ptr3 = arr3;
    puts("Enter element at array 1");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d",&arr1[i][j]);
        }
    }


    puts("Enter element at array 2");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d",&arr2[i][j]);
        }
    }

    isMatrix(ptr1, ptr2,ptr3);


}
