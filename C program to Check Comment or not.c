#include <stdio.h>
#include <string.h>
int main() {
    char line[100];
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);
    if (line[0] == '/' && line[1] == '/') {
        printf("The line is a comment line.\n");
    } else if (line[0] == '/' && line[1] == '*') {
        printf("The line is a comment line.\n");
    } else {
        printf("The line is not a comment line.\n");
    }
    return 0;
}
