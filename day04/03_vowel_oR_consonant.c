// WAP to read a character from the user and test it whether it
// a vowel or consonant or not an  ALPHABET
#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter the any character Please :\n");
    scanf("%c", &alpha);

    // condition to cheeck the entered value is Alphabate OR not;
    if ((alpha >= 'a' && alpha <= 'z' || alpha >= 'A' && alpha <= 'Z'))
    {
        // condition to cheeck the entered Latter is Vowel or Consonant;
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        {
            printf("Vowel Letter");
        }
        else
        {
            printf("Consonant Letter");
        }
    }
    else
    {
        printf("wrong Input Please Enter any ALPHABET Letter only");
    }
    return 0;
}