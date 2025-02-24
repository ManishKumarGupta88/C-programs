#include<stdio.h>

int main() {
    char a[100];
    FILE *p1, *p2;

    p1 = fopen("test.txt", "r");
    if (p1 == NULL) {
        printf("File cannot be opened");
        return 1; // Exiting the program if file cannot be opened
    } else {
        printf("File opened\n");
    }

    p2 = fopen("hii.txt", "w"); // Open in write mode to copy content
    if (p2 == NULL) {
        printf("File cannot be opened");
        fclose(p1); // Closing the first file before exiting
        return 1;   // Exiting the program if file cannot be opened
    } else {
        printf("File opened\n");
    }

    while (fgets(a, 100, p1) != NULL) {
        fputs(a, p2);
    }

    printf("File copied successfully\n");
    
    fclose(p1);
    fclose(p2);

    return 0;
}
