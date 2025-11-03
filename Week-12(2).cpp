#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("student.txt", "r"); // open file to read
    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    printf("\n--- File Content ---\n\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}