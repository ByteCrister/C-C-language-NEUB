#include <stdio.h>

int main()
{
    int i = 0, count = 0;
    char ar[50], c;

    printf("Enter a string: ");
    gets(ar);

    printf("\nEnter the character to count: ");
    scanf(" %c", &c);  // Notice the space before %c to consume any whitespace characters.

    while (ar[i] != '\0')
    {
        if (ar[i] == c)
        {
            count++;
        }
        i++;
    }

    if (count > 0)
    {
        printf("Occurrences of '%c': %d\n", c, count);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", c);
    }

    return 0;
}
