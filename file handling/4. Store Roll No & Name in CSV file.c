#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int roll;
    char name[50], ch[5];
    fp = fopen("data.csv", "w");
    if (fp == NULL) {
        printf("Cannot create file\n");
        return 0;
    }
    fprintf(fp, "Roll No,Name\n");
    do {
        printf("Roll No: ");
        scanf("%d", &roll);
        printf("Name: ");
        scanf("%s", name);
        fprintf(fp, "%d,%s\n", roll, name);
        printf("More? (y/n): ");
        scanf("%s", ch);
    } while (ch[0] == 'y' || ch[0] == 'Y');
    fclose(fp);
    return 0;
}
