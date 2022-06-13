//
// Created by shawm on 12-06-2022.
//
#include <stdio.h>

int main(void)
{
    int size;
    scanf("%d",&size);
    int arr[size][size], b[size][size], c[size][size];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d",&b[i][j]);
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            c[i][j] = arr[i][j]+b[i][j];
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d",c[i][j]);
        }
    }
}