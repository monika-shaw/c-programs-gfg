//
// Created by shawm on 10-06-2022.
//

#include <stdio.h>


int *fun(){

    static int x=10;
    return &x;
}

int main(){

    int *p =fun();
    printf("%d\n",p);
    printf("%d",*p);
}