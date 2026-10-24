#include <stdio.h>

int main() {
    int choice, n;
    do {
    printf("\nChoose a number system to convert to: ");
    printf("\n1. Binary \n2. Octal \n3. Hexadecimal\n");
    scanf("%d", &choice);

    printf("\nEnter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        if (choice == 1) {
            printf("\nBinary equivalent is: 0");
        } else if (choice == 2) {
            printf("\nOctal equivalent is: 0");
        } else if (choice == 3) {
            printf("\nHexadecimal equivalent is: 0");
        } else {
            printf("\nInvalid choice");
        }
        return 0;
    }

    if (choice == 1) {
        int binary[32], i = 0;
        while (n > 0) {
            binary[i++] = n % 2;
            n = n/2;
        }
        printf("\nBinary equivalent is: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    else if (choice == 2) {
        int octal[32], i = 0;
        while (n > 0) {
            octal[i++] = n % 8;
         n=n/8;
        }
        printf("\nOctal equivalent is: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", octal[j]);
        }
    }
    else if (choice == 3) {
        char hexadecimal[32];
        int i = 0;
        while (n > 0) {
            int rem = n % 16;
            hexadecimal[i++] = (rem < 10) ? (rem + '0') : (rem - 10 + 'A');
          n=n/16;
        }
        printf("\nHexadecimal equivalent is: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", hexadecimal[j]);
        }
    }
    else {
        printf("\nInvalid choice");
    }
char ch;
    printf("\nDo you want to convert another number? (y/n): ");
    scanf(" %c", &ch);
    if (ch != 'y' && ch != 'Y') {
        break;
    }
    
} while (1);

    return 0;
}