#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);
    return 0;
}
