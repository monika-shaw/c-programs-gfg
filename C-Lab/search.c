//search an element in an array

#include <stdio.h>
#include <stdbool.h>
int size;

int isFound(int arr[], int search)
{
    for (int i = 0; i < size; i++) {
        if(arr[i] == search)
            return search;
        else
            return false;
    }
}
int main(void)
{
    int p;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d",&arr[i]);
    }

    int search;
    printf("Enter the element to be searched");
    scanf("%d",&search);
     p = isFound(arr, search);
     if(p == search)
         printf("Element founf %d",search);
     else
         printf("Not found");
}