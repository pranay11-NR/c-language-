#include <stdio.h>

int main() {
    FILE *fp;
    char line[500];
    fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }
    while (fgets(line, 500, fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}
