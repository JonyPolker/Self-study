#include <stdio.h>

typedef struct
{
    char* name;
    int age;
    double salary;
}employee;

int main()
{
    employee sam = { sam.name = "Sam", sam.age = 23, sam.salary = 4500 };
    printf("Name: %s \n", sam.name);
    printf("Age: %d \n", sam.age);
    printf("Salary: %.2f \n", sam.salary);
}