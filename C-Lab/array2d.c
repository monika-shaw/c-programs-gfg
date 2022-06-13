//
// Created by shawm on 12-06-2022.
//

#include <stdio.h>

int main(void)
{
    int size;
    scanf("%d",&size);
    int a[size][size];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d",a[i][j]);
        }
    }
}