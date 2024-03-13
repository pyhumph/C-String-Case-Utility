#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("Before: ");
    printf("After: ");

    int string_length = strlen(name);

    for (int i = 0; i < string_length; i++)
    {
        printf("%c", toupper(name[i]));
    }
    printf("\n");
}