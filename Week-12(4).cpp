#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("student.txt", "r");
    fp2 = fopen("upper.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file!");
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(toupper(ch), fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("\nFile converted to uppercase and saved as 'upper.txt'\n");
    return 0;
}