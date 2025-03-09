#include <stdio.h>

void print_person(char* name, int age)
{
    printf("Name: %s \t Age: %d \n", name, age);
}

void print_product(char* title, int price)
{
    printf("Title: %s \t Price: %d \n", title, price);
}

int main(void)
{
    void (*operations)(char*, int);

    operations = print_person;
    operations("John", 24);

    operations = print_product;
    operations("Bread", 49);
    return 0;
}