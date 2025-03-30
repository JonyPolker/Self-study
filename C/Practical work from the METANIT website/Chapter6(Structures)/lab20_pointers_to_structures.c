#include <stdio.h>

typedef struct person
{
    char* name;
    int age;
}person;

int main()
{
    person bob = {.name = "Bob", .age = 21};
    person *pb = &bob;

    printf("Name is %s \n", pb->name);
    printf("Age is %d", pb->age);
}