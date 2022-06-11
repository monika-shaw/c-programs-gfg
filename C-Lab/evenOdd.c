//
// Created by shawm on 08-06-2022.
//
#include <stdio.h>
#include<stdbool.h>
static int num;

bool evenOdd(int arr[])
{
    for(int i=0;i<num;i++)
        if(arr[i] % 2 == 0)
            return true;
        else
            return false;

}
int main() {
    // your code goes here

    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
        scanf("%d\n",&arr[i]);
    bool result = evenOdd(arr);
    if(result == true)
        printf("EVEN");
    else
        printf("ODD");

    return  0;
}
