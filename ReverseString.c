#include <stdio.h>
#include <string.h>

char stack[50];
int top = -1;

void push(char c) {
    top += 1;
    stack[top] = c;
}

void pop() {
    char c;
    c = stack[top];
    top -= 1;
    printf("%c", c);
}

int main() {
    char str[30];
    int i, len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        push(str[i]);
    }

    printf("Reverse of a string is : \n");

    for(int i = 0; i < len; i++) {
        pop();
    }

    printf("\n");

    return 0;
}