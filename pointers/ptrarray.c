//
// Created by shawm on 10-06-2022.
//
/*
#include <stdio.h>

int main(){
    int a[]  = {10,20, 30};
    int *ptr;
    ptr = a;

    for( int i = 0;i< 3 ;i++){
        printf("%p\n",ptr);
        printf("%d\n",*ptr);
        printf("\n");
        ptr++;
    }
}*/


#include <stdio.h>

int main(){
    int a[] = {1,2,3};
    int *ptr;
    ptr = &a[0];

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
//    printf("%d\n",*ptr);


}