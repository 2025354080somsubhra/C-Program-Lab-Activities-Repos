// Q1
// #include <stdio.h>
// #include <string.h>

// void printShortName(char name[]) {
//     char *parts[10];   
//     int count = 0;

    
//     char *token = strtok(name, " ");
//     while (token != NULL) {
//         parts[count++] = token;
//         token = strtok(NULL, " ");
//     }

//     if (count == 0) return;

    
//     printf("%c. ", parts[0][0]);

    
//     if (count > 2) {
//         printf("%c. ", parts[1][0]);
//     }

    
//     printf("%s\n", parts[count - 1]);
// }

// int main() {
//     char name[100];

//     printf("Enter full name: ");
//     fgets(name, sizeof(name), stdin);


//     name[strcspn(name, "\n")] = '\0';

//     printShortName(name);

//     return 0;
// }

// Q2
#include <stdio.h>
#include <ctype.h>


int countChar(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    
    char ch;
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    int freq = countChar(str, ch);
    printf("Frequency of '%c' = %d\n", ch, freq);

    
    int spaces = countChar(str, ' ');
    int words = 0;

    if (str[0] != '\0') {
        words = spaces + 1;
    }

    printf("Number of words = %d\n", words);

    
    printf("\nFrequency of each alphabet:\n");
    for (char c = 'a'; c <= 'z'; c++) {
        int f1 = countChar(str, c);
        int f2 = countChar(str, c - 32); 
        int total = f1 + f2;

        if (total > 0) {
            printf("%c / %c : %d\n", c, c - 32, total);
        }
    }

    return 0;
}

