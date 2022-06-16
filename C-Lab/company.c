//
// Created by shawm on 16-06-2022.
//Write a program to create a structure named company which has name, address,
//phone and noOfEmployee as member variables. Read name of company, its
//address, phone and noOfEmployee. Finally display these members‟ value.

#include <stdio.h>
#include <stdlib.h>

struct Company
{
    char name[20];
    char address[100];
     int phone;
    int noOfEmployee;
}c;
int main(void)
{
    printf("Enter the details of company\n");
    scanf("%s%s%d%d",c.name,c.address,&c.phone,&c.noOfEmployee);
    puts("Details of company are:");
    printf("%s%s%d%d\n",c.name,c.address,c.phone,c.noOfEmployee);
}