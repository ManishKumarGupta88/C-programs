#include<stdio.h>

int main() {
    char ch;
    FILE *p;

    p = fopen("hii.txt", "w");
    if (p == NULL) {
        printf("File cannot be opened\n");
        return 1; // Exiting the program if file cannot be opened
    }

    fprintf(p, "roll no=1\nname:Disha\nmarks:20");

    fclose(p); // Close the file after writing

    // Reopen the file in read mode
    p = fopen("hii.txt", "r");
    if (p == NULL) {
        printf("File cannot be opened\n");
        return 1; // Exiting the program if file cannot be opened
    }

    // Read and print the content of the file
    while ((ch = fgetc(p)) != EOF) {
        printf("%c", ch);
    }

    fclose(p); // Close the file after reading

    return 0;
}
