#include <stdio.h>
#include <string.h>

int main() {
    char String[100];

    printf("Enter a string: ");
    scanf("%s", String);

    // Corrected IF statement
    if ((String[0] == '0' || String[0] == '1') && 
        (String[strlen(String) - 1] == '0' || String[strlen(String) - 1] == '1')) {
        
        int i;
        for (i = 0; i < strlen(String); i++) {
            if (String[i] < '0' || String[i] > '1') {
                printf("Invalid! \n");
                return 0;
            }
        }
        printf("Valid! The string starts with '0' or '1' and ends with '0' or '1'.\n");
    } 
    else {
        printf("Invalid! The string does not start with '0' or '1' and end with '0' or '1'.\n");
    }

    return 0;
}

