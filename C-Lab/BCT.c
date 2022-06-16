//
// Created by shawm on 16-06-2022.
//Write a program to read RollNo, Name, Address, Age & average-marks of 12
//students in the BCT class and display the details from function

#include <stdio.h>
#include <stdlib.h>

struct Bct{
    int roll;
    char name[20];
    char address[100];
    int age;
    int avgMarks;
}s[2];

void showData()
{
    for (int i = 0; i < 2; ++i) {
        printf("roll is: %d\nname is: %s\naddress is : %s\nage is %d\navg marks is: %d", s[i].roll, s[i].name, s[i].address, s[i].age, s[i].avgMarks);
    }
}

void avgMarks()
{
    int sum = 0, avg = 0;
    for (int i = 0; i < 2; ++i) {
        sum = sum + s[i].avgMarks;
    }
    printf(sum);
    avg = sum/2;
    printf("%d",avg);
}
int main(void)
{
    puts("Enter details");
    for (int i = 0; i < 2; ++i) {
        scanf("%d%s%s%d%d",&s[i].roll,s[i].name,s[i].address,&s[i].age,&s[i].avgMarks);
    }

    showData();
    avgMarks();

}

