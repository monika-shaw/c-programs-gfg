//
// Created by shawm on 13-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

 int size;

void isSwap(int *arr1, int *arr2)
{
    int temp[size];
    for (int i = 0; i < size; ++i) {
        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }


    for (int i = 0; i<size ;i++)
     {
         printf("%d\n",arr1[i]);
     }
        for (int i = 0; i<size ;i++)
        {
        printf("%d\n",arr2[i]);
        }
}

int main(void)
{
    puts("Enter the size");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    int *ptr1, *ptr2;
    ptr1=arr1;
    ptr2= arr2;

    puts("Enter elements at array 1");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr1[i]);
    }
    puts("Enter elements at array 2");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr2[i]);
    }
    isSwap(ptr1,ptr2);
}



//
// Created by shawm on 13-06-2022.
//

/*
#include <stdio.h>
#include <stdlib.h>

static int size;


int main(void)
{
    puts("Enter the size");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    int *ptr1, *ptr2;
    ptr1=arr1;
    ptr2= arr2;

    puts("Enter elements at array 1");
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr1[i]);
    }
    puts("Enter elements at array 2");
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr2[i]);
    }

    for (int i = 0; i < size; ++i) {
        printf("before: %d\n",arr1[i]);
    }
    for (int i = 0; i < size; ++i) {
        printf("before: %d\n",arr2[i]);
    }


    int temp[size];
    for (int i = 0; i < size; ++i) {
        temp[i] = ptr1[i];
        ptr1[i] = ptr2[i];
        ptr2[i] = temp[i];
    }

    for (int i = 0; i < size; ++i) {
        printf("after: %d\n",ptr1[i]);
    }
    for (int i = 0; i < size; ++i) {
        printf("after :%d\n",ptr2[i]);
    }

}*/
