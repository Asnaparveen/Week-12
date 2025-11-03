 #include <stdio.h>

int main() {
    FILE *fp;
    char name[50], className[10];
    int roll;

    fp = fopen("student.txt", "w"); // open file to write
    if (fp == NULL) {
        printf("Error in opening file!");
        return 0;
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter class: ");
    scanf("%s", className);
    printf("Enter roll number: ");
    scanf("%d", &roll);

    fprintf(fp, "Name: %s\nClass: %s\nRoll No: %d\n", name, className, roll);
    fclose(fp);

    printf("\nData written successfully to file 'student.txt'\n");
    return 0;
}