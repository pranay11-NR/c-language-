#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[500];
    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 0;
    }
    printf("Enter lines (type 'END' to stop):\n");
    while (1) {
        gets(line);
        if (strcmp(line, "END") == 0) break;
        fputs(line, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}
