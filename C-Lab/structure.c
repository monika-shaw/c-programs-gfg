//
// Created by shawm on 14-06-2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
struct Employee
{
    char name[30];
    int empId;
    float salary;
}employee;
int main(void)
{
    strcpy(employee.name,"John");
    employee.empId = 101;
    employee.salary = 2500.00;

    printf("Name is %s\n",employee.name);
    printf("Id is %d\n",employee.empId);
    printf("salary is %f\n",employee.salary);

}
*/

int main()
{

    char name[10][100] = {"hi","HEllo","Bye"};
    for (int i = 0; i < 10; ++i) {
        printf("%s",name[i]);
    }
}
