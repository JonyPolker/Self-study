#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    char *locale = setlocale(LC_ALL, "Russian");

    size_t int_size = sizeof(int);
    size_t size;
    size = sizeof(double);
    printf("int_size - %d \n", int_size);
    printf("double size - %d \n", size);
    size_t size_string = sizeof "God save the tsar!"; 
    printf("size_string - %d \n", size_string);
    char text[] = "God save the tsar!";
    size_t size_text = sizeof (text);
    printf("Text - %s ", text);                 //  The option of writing in 2 lines 
    printf("size text - %d \n", size_text);     //  Вариант записи в 2 строки
    printf("Text - \"%s\", size of text - %d \n", text, size_text);     //  The option of writing in 1 line ||  Вариант записи в 1 строку

    int args[2] = {16, 52};

    int input;
    printf("Input 1 or 2: \n");
    scanf("%d", &input);
    if(input == 1)
    {
        printf("Age - %d. ", args[input-1]);
    }
    else if (input == 2)
    {
        printf("Age - %d. ", args[input-1]);
    }
    else if (input =! 1 || 2)
    {
        printf("Error input, try again. \n");
    }
    return 0;
}