//
// Created by shawm on 11-06-2022.
//
#include <stdio.h>

int size;

int isSum(int arr[])
{

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum = sum + arr[i];
    }
    return sum;
}
int main(void)
{

    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; ++i)
        scanf("%d",&arr[i]);
     int result = isSum(arr);

        printf("%d",result);
    return 0;

}
