//Write a program to insert 5 elements into an array and print the elements of
//the array.

/*
#include <stdio.h>

int main(void)
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for( int i = 0; i < size; i++)
        printf("%d",arr[i]);
}*/

/*
#include <stdio.h>
#include <stdlib.h>

 int size;

 int *printArray(int arr[])
{
    for( int i = 0; i < size; i++)
        return arr;
}
int main(void)
{
    scanf("%d",&size);
    int *r;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }


    r = printArray(arr);

    for(int i = 0; i <size; i++)
        printf("%d",r[i]);


}*/
#include <stdio.h>
#include <stdlib.h>

int size;

int *printArray(int arr[])
{
    for( int i = 0; i < size; i++)
        return arr;
}
int main(void)
{
    scanf("%d",&size);
    int *r;
    int *ptr;
    ptr = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }


    r = printArray(ptr);

    for(int i = 0; i <size; i++)
        printf("%d",r[i]);


}