#include <stdio.h>
#include <string.h>
void reverseString(char str[], int index) {
    if (str[index] == '\0') {
        return;
    }
    reverseString(str, index + 1);
    printf("%c", str[index]);
}

int main() {
    char message[100];  
    printf("Enter the message (password): ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    printf("Original message: %s\n", message);
    printf("Reversed message: ");
    reverseString(message, 0);
    printf("\n");
    
    return 0;
}

