//
// Created by shawm on 08-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

const int number = 10;

double avgWeight(double arr[]){

    double sum = 0, avg;
    for (int i = 0; i < number; ++i)
        sum = sum +arr[i];
    avg = sum/number;
    return avg;
}

int main(void){

    double arr[number];
    puts("Enter the numbers");
    for (int i = 0; i < number; ++i)
        scanf("%lf",&arr[i]);
    double result = avgWeight(arr);
    printf("%d",result);
    return EXIT_SUCCESS;


}


