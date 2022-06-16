//
// Created by shawm on 14-06-2022.
//

#include <stdio.h>
#include <string.h>

int size;
int *isReverse(int *ptr)
{
    int  temp = 0;
    for (int i = 0; i < size/2; ++i) {
        temp = ptr[i];
        ptr[i] = ptr[size - i -1];
        ptr[size - i - 1] = temp;
    }
    return ptr;

}
int main(void)
{

    scanf("%d",&size);
    int arr[size];
    int *ptr;
    ptr = arr;
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);

    }

    int *result;
    result= isReverse(ptr);
    for (int i = 0; i < size; ++i) {
        printf("%d\n",result[i]);
    }
}