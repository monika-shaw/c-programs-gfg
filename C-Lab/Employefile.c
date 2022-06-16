//
// Created by shawm on 16-06-2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ptr;
    int id;
    char name[30];
    float salary;
    ptr = fopen("emp.txt","w");
    if(ptr == NULL)
    {
        puts("File does not exist");
        return 0;
    }
    puts("Enter the id");
    scanf("%d",&id);
    fprintf(ptr,"Id is :%d",id);
    puts("Enter the name");
    scanf("%s",name);
    fprintf(ptr,"Name is: %s",name);
    puts("Enter the salary");
    scanf("%f",&salary);
    fprintf(ptr,"Salary is :%f",salary);
    fclose(ptr);
}