#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    int x = 0, n = 0;
    void *mypointer, *address[5];
    char c, Array2[15], Array3[15];
    printf("Input the expression ending with $ sign:");
    while ((c = getchar()) != '$') {
        Array2[n++] = c;
    }
    Array2[n] = '\0';
    printf("Given Expression: %s\nSymbol Table display\nSymbol\taddr\ttype\n", Array2);

    for (int i = 0; i < n; i++) {
        c = Array2[i];
        if (isalpha(c) || c == '+' || c == '-' || c == '*' || c == '=' || c == '/') {
            mypointer = malloc(sizeof(c));
            address[x] = mypointer;
            Array3[x] = c;

            if (isalpha(c)) {
                printf("%c\t%d\tidentifier\n", c, mypointer);
            } else {
                printf(" %c\t%d\toperator\n", c, mypointer);
            }
            x++;
        }
    }
    return 0;
}
