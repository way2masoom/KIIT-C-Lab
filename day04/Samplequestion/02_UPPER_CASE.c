// WAP to read an Alphabet from the user and convert it into uppercase it the
// entered alphabet is in lowercase, otherwise display an appropriate message
#include <stdio.h>
#include <conio.h>

int main()
{
    // Declarection variable
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    // condition to display UPPER LATTER
    int upper = ch - 'a' + 'A';

    // Condition to display LOWER LATTER
    // int upper = ch + 'a' - 'A';
    printf("Uppercase alphabet is: %c", upper);
    return 0;
}
