#include <stdio.h>
#include <string.h>

int main() {
    char noun[50];
    char verb[50];
    char adjective1[50];
    char adjective2[50];
    char adjective3[50];

    printf("Enter an adjective (description):");
    fgets(adjective1, sizeof(adjective1), stdin );
    adjective1[strcspn(adjective1, "\n")] = 0; // Remove newline character
    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin );
    noun[strcspn(noun, "\n")] = 0;
    printf("Enter an adjective (description):");
    fgets(adjective2, sizeof(adjective2), stdin );
    adjective2[strcspn(adjective2, "\n")] = 0;
    printf("Enter a verb (ending with -ing): ");
    fgets(verb, sizeof(verb), stdin );
    verb[strcspn(verb, "\n")] = 0;
    printf("Enter another adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin );
    adjective2[strcspn(adjective2, "\n")] = 0;

    printf("Once upon a time, there was a %s %s who loved %s. Every day, the %s would go %s to find new adventures. One day, it met a %s friend, and they lived happily ever after!\n",
           adjective1, noun, verb, noun, verb, adjective3);

    return 0;

}