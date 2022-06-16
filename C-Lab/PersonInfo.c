//
// Created by shawm on 16-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("info.txt","w");
    if(ptr == NULL)
    {
        puts("File does not Exist");
    }
    char name[20];
    int age;
    float salary;
    puts("Enter the name");
    scanf("%s",name);
    fprintf(ptr,"Name is :%s",name);
    puts("Enter the age");
    scanf("%d",&age);
    fprintf(ptr,"Age is :%d",age);
    puts("Enter the salary");
    scanf("%f",&salary);
    fprintf(ptr,"Salary is : %f",salary);
    fclose(ptr);
}