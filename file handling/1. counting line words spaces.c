#include<stdio.h>
#include<stdlib.h>
int main() {
FILE
*fp;
char ch;
int lines = 0,
words = 0, chars =0,spaces= 0;

fp = fopen ("data.txt", "r");
if (fp == NULL) {
printf("File not found!\n");
return 0;
}
while((ch = fgetc(fp)) != EOF) {
chars++;
if (ch == ' ') spaces++; if (ch == '\n') lines++; if
(ch = ' ' || ch =='\n' || ch == '\t') words++;}
if
(chars > 0) {
words++;
if (lines == 0)
lines = 1;
}
printf( "Lines: %d\n", lines);
printf("Words: %d\n", words);
printf ("Characters: %d\n", chars);
printf ("Spaces: %d\n", spaces);
fclose (fp);
return 0;
}
