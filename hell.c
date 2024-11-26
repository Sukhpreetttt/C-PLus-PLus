#include <stdio.h>
#include <string.h>
// write a program to check whether a string is palindrome or not using stack.
char stack[50];
int top = -1;

void push(char arg) {
    top = top + 1;
    stack[top] = arg;
}

char pop() {
    char c;
    c = stack[top];
    top = top - 1;
    return c;
}

int main() {
    char string[30];
    int i, len, count = 0;

    printf("Enter string: ");
    scanf("%s", string);

    len = strlen(string);

    for (i = 0; i < len; i++) {
        push(string[i]);
    }

    for (i = 0; i < len; i++) {
        if (string[i] == pop()) {
            count++;
        }
    }

    if (len == count) {
        printf("Given string is a palindrome.\n");
    } else {
        printf("Given string is not a palindrome.\n");
    }

    return 0;
}
