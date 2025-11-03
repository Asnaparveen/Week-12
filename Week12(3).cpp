#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, spaces = 0, chars = 0;

    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("\nNumber of characters: %d\n", chars);
    printf("Number of spaces: %d\n", spaces);
    printf("Number of lines: %d\n", lines);

    return 0;
}