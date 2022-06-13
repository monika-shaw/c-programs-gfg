//
// Created by shawm on 11-06-2022.
//
#include <stdio.h>
int size;
int *isLargestSmallest(int arr[])
{
    int temp = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(arr[i]>arr[j])
            {
                temp  = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;


            }
        }
    }

    return arr;

}

int main(void)
{
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }
    int *result;
    result= isLargestSmallest(arr);
    printf("largest is %d\n",result[size-1]);
    printf("Smallest is %d\n",result[size-size]);


}