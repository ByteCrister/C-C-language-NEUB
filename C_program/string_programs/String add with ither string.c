#include <stdio.h>
#include <stdlib.h>

int main() {
    char c1[40], c2[20];
    int i, j = 0, l1 = 0, l2 = 0;

    printf("Type first string: ");
    fgets(c1, sizeof(c1), stdin);
    printf("Type second string: ");
    fgets(c2, sizeof(c2), stdin);

    // Remove the newline characters from the input strings
    c1[strcspn(c1, "\n")] = '\0';
    c2[strcspn(c2, "\n")] = '\0';

    while (c1[l1] != '\0') {
        l1++;
    }

    while (c2[l2] != '\0') {
        l2++;
    }

    if (l1 + l2 >= sizeof(c1)) {
        printf("The combined strings are too long for the buffer.\n");
    } else {
        for (i = 0; i < l2; i++) {
            c1[l1 + i] = c2[i];
        }

        printf("Combined string: %s\n", c1);
    }

    return 0;
}
