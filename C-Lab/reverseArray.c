//
// Created by shawm on 11-06-2022.
//
#include <stdio.h>

int size;
int *isReverse(int arr[])
{
     int temp = 0;
    for (int i = 0; i < size/2; ++i) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1]=temp;
    }


    return arr;
}
int main(void)
{
    scanf("%d",&size);
    int a[size];
    int arr[size];
    for(int i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    int *result;
    result= isReverse(arr);

    for (int i = 0; i < size; ++i) {
        printf("%d",result[i]);
    }

}